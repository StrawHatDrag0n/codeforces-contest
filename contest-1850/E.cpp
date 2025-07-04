// E. Cardboard for Pictures
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
	ulli n = 0, c = 0;
	cin >> n >> c;
	vector<ulli> A(n);
	for(int i = 0; i < n; i++) {
		cin>>A[i];
	}
	ulli a = 4;
	ulli l = 0, r = (ulli)1e9, w = 1;
	while(l <= r) {
		ulli mid = l + (r - l) / 2;
		ulli newc = 0;
		for(int i = 0; i < n; i++) {
			ulli cl = mid  + mid + A[i];
			newc = min((ulli)2e18, newc + cl * cl);	
		}
		if(newc == c) {
			w = mid;
			break;
		} else if (newc < c) {
			l = mid+1;
		} else {
			r = mid-1;
		}
	}
	cout<<w<<endl;
	
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