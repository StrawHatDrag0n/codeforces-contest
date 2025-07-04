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
	lli n = 0;
	cin>>n;
	int maxSize = 0;
	int size = 0;
	for(lli i = 1; i <= 42; i++) {
		if(n%i == 0) {
			size++;
		} else {
			maxSize = max(maxSize, size);
			size = 0;
		}
	}
	maxSize = max(maxSize, size);
	cout<<maxSize<<endl;
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