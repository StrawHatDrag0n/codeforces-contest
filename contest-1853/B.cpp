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
	int n = 0, k = 0;
	cin >> n >> k;
	int ans = 0;
	for(int i = 0; i <= n; i++) {
		int second = n;
		int first = i;
		bool isValid = true;
		for(int j = 0; j < k - 2; j++) {
			int fx = first;
			first = second - first;
			second = fx;
			isValid = isValid && first <= second;
			isValid = isValid && min(first, second) >= 0;
			if(!isValid) break;
		} 
		if(isValid) ans++;
	}
	cout<<ans<<endl;
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