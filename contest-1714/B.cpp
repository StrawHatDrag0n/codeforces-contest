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

	unordered_map<int, int> mp;
	set<int> duplicates;

	vector<int> arr(n);
	for(int &val: arr) {
		cin>>val;
		mp[val]++;
		if(mp[val] > 1) duplicates.insert(val);
	}

	int ops = 0;
	for(int val: arr) {
		if(duplicates.empty()) break;
		if(mp[val] > 1) {
			mp[val]--;
			if(mp[val] == 1) {
				duplicates.erase(val);
			}
		}
		ops++;
	}
	cout<<ops<<endl;

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