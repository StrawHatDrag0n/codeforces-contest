#include <bits/stdc++.h>
#define ld long double
#define lli long long int
#define ulli unsigned long long int
#define REP(i, start, end) for(int i = start; i < end; i++)
#define REPE(i, start, end) for(int i = start; i <= end; i++)
#define RREP(i, start, end) for(int i = start; i > end; i--)
#define RREPE(i, start, end) for(int i = start; i >= end; i--)

using namespace std;

int MOD = 998244353;

int f(int i, int k, int n, unordered_map<string, int> &cache) {
	if(i > n) return 0;
	if(i == n) return 1;
	string key = to_string(i) + " " + to_string(n) + " " + to_string(k);
	if(cache.find(key) != cache.end()) return cache[key];
	int ans = 0;
	for(int idx = 1; idx <= n/k; idx++) {
		ans += f(i+k*idx, k+1, n, cache)%MOD;
	}
	return cache[key] = ans;
}

void solve() {
	int n = 0, k = 0;
	cin>>n>>k;
	unordered_map<string, int> cache; 
	for(int i = 1; i <= n; i++)
	cout<<f(0, k, i, cache)<<" ";
	cout<<endl;

}

int main() {
	// your code goes here
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    solve();
	return 0;
}