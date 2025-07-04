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
	cin>>n;
	vector<int> P(n);
	REP(i, 0, n) cin>>P[i];
	int cnt = 0;
	REP(i, 0, n) {
		if(P[i] == i+1) {
			cnt++;
		}
	}
	cout<<(cnt+1)/2<<endl;
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