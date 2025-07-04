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
	vector<int> A(n);
	for(int i = 0; i < n; i++) {
		cin>>A[i];
	}
	for(int i = 0; i < n-1; i++) {
		if(A[i] > A[i+1]) {
			cout<<0<<endl;
			return;
		}
	}

	int minDiff = INT_MAX;
	for(int i = 0; i < n-1; i++) {
		minDiff = min(minDiff, abs(A[i] - A[i+1]));
	}
	if(minDiff%2 == 0) cout<<minDiff/2 + 1<<endl;
	else cout<<(minDiff+1)/2<<endl;
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