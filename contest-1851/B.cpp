#include <bits/stdc++.h>
#define ld long double
#define lli long long int
#define ulli unsigned long long int
#define REP(i, start, end) for(int i = start; i < end; i++)
#define REPE(i, start, end) for(int i = start; i <= end; i++)
#define RREP(i, start, end) for(int i = start; i > end; i--)
#define RREPE(i, start, end) for(int i = start; i >= end; i--)

using namespace std;

void solve() {
	int n = 0;
	cin >> n;
	vector<int> A(n);
	priority_queue<int, vector<int>, greater<int>> pq;
	unordered_set<int> odd, even;
	for(int i = 0; i < n; i++) {
		cin>>A[i];
		if(A[i]%2) {
			odd.insert(i);
		} else {
			even.insert(i);
		}
		pq.push(A[i]);
	} 

	for(int i = 0; i < n; i++) {
		int top = pq.top();
		pq.pop();
		if(top%2 == 1 && odd.find(i) == odd.end()) {
			cout<<"NO\n";
			return;
		} else if(top%2 == 0 && even.find(i) == even.end()) {
			cout<<"NO\n";
			return;
		}
	}
	cout<<"YES\n";
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