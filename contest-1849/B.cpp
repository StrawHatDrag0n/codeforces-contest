#include <bits/stdc++.h>
#define ld long double
#define lli long long int
#define ulli unsigned long long int
#define REP(i, start, end) for(int i = start; i < end; i++)
#define REPE(i, start, end) for(int i = start; i <= end; i++)
#define RREP(i, start, end) for(int i = start; i > end; i--)
#define RREPE(i, start, end) for(int i = start; i >= end; i--)

using namespace std;

lli f(lli value, lli k, lli greater) {
	lli l = 1, r = value / k + 1, ans = 0;
	while(l <= r) {
		int mid = (l + r) / 2;
		if(value - mid * k > greater) {
			ans = mid;
			l = mid + 1;
		} else {
			r = mid - 1;
		}	
	}
	return ans;
}

void solve() {
	lli n = 0, k = 0;
	cin>>n>>k;
	auto comp = [](const pair<lli, lli> a, const pair<lli, lli> b) {
			if(a.first == b.first) return a.second > b.second;
			return a.first < b.first;
		};
	priority_queue<
		pair<lli, lli>, 
		vector<pair<lli, lli>>, 
		decltype(comp)> pq(comp);
	for(int i = 0; i < n; i++) {
		lli tmp;
		cin>>tmp;
		if(tmp%k == 0) {
			tmp = k;
		} else {
			tmp = tmp % k;
		}
		pq.push({tmp, i});
	}
	vector<lli> ans;
	while(!pq.empty()) {
		pair<lli, lli> tmp = pq.top();
		pq.pop();
		tmp.first -= k;
		if(tmp.first > 0) pq.push(tmp);
		else ans.push_back(tmp.second);
	}

	for(int i = 0; i < n; i++) {
		cout<<ans[i] + 1<<" ";
	}
	cout<<endl;
}

int main() {
	// your code goes here
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int t = 0;
	cin>>t;
	
	while(t--) solve();
	return 0;
}