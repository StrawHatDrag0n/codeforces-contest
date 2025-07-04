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
	int n  = 0, k = 0;
	cin >> n >> k;

	vector<int> C(n);
	for(int i = 0; i < n; i++) {
		cin >> C[i];
	}
	unordered_map<int, int> cmap;
	int i = 0;
	while(i < n && cmap[C[0]] < k) {
		if(C[i] == C[0]) {
			cmap[C[0]]++;
		}
		i++;
	}
	i--;
	int j = n-1;
	while(j >=0 && j > i && cmap[C[n-1]] < k) {
		if(C[j] == C[n-1]) {
			cmap[C[n-1]]++;
		}
		j--;
	}
	j++;
	if(i <= j) {
		for(auto&it: cmap) {
			if(it.second%k != 0) {
				cout<<"NO\n";
				return;
			}
		}
		cout<<"YES\n";
		return;
	} else cout<<"NO\n";
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