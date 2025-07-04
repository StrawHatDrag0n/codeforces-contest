#include <bits/stdc++.h>
#define ld long double
#define lli long long int
#define ulli unsigned long long int
#define REP(i, start, end) for(int i = start; i < end; i++)
#define REPE(i, start, end) for(int i = start; i <= end; i++)
#define RREP(i, start, end) for(int i = start; i > end; i--)
#define RREPE(i, start, end) for(int i = start; i >= end; i--)

using namespace std;

bool f(int i, string &a, string &b, map<pair<string, int>, bool> &cache) {
    if(i >= a.size()-1) return a.substr(a.size()-b.size(), a.size()) == b;
    if(cache.find({a, i}) != cache.end()) return cache[{a, i}];
    char c = a[i];
    a[i] = (char)(max(a[i-1]-'0', a[i]-'0') + '0');
    if(f(i+1, a, b, cache)) return cache[{a, i}] = true;
    a[i] = c;
    a[i] = (char)(min(a[i-1]-'0', a[i]-'0') + '0');
    if(f(i+1, a, b, cache)) return cache[{a, i}] = true;
    a[i] = c;
    return cache[{a, i}] = false;
}

void solve() {
    int n = 0, m  = 0;
    cin>>n>>m;

    string a, b;
    cin>>a>>b;

    map<pair<string, int>, bool> cache;
    if(n == m) {if(a == b) cout<<"YES\n"; else cout<<"NO\n";} 
    else if(f(1, a, b, cache)) cout<<"YES\n";
    else cout<<"NO\n";
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