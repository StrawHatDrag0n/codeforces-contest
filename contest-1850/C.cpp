// C. Word on the Paper
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
	int n = 8;
	vector<vector<char>> grid(n, vector<char>(n, '.'));
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			cin>>grid[i][j];
		}
	}
	string s;
	for(int j = 0; j < n; j++) {
		for(int i = 0; i < n; i++) {
			if(grid[i][j] != '.')
			s += grid[i][j];
		}
	}
	cout<<s<<endl;
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