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
	int b = 0, c = 0, h = 0;
	cin>>b>>c>>h;
	int layers = 0;
	while((h > 0 || c > 0) && b > 1) {
		layers+=2;
		if(h > 0) {
			h--;
			b--;
		} else {
			c--;
			b--;
		}
	}
	layers++;
	b--;
	cout<<layers<<endl;
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