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
	int64_t n = 0;
	cin>>n;

	vector<int64_t> a(n);
	for(int64_t&num: a) cin>>num;
	sort(a.begin(), a.end());
	vector<int64_t> b, c;
	for(int i = n-1; i >= 0; i--) {
		c.push_back(a[i]);
		int j = i-1;
		for(j = i-1; j >=0; j--) {
			if(a[j] % a[i] == 0) {
				c.push_back(a[j]);
			} else {
			 break;
			}
		
		}
		while (j >= 0)
			b.push_back(a[j--]);
		break;
	}
	if(c.empty() || b.empty()) {
		cout<<-1<<endl;
	} else {
		cout<<b.size()<<" "<<c.size()<<endl;
		for(int64_t num: b) cout<<num<<" ";
		cout<<endl;
		for(int64_t num: c) cout<<num<<" ";
		cout<<endl;
	}
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