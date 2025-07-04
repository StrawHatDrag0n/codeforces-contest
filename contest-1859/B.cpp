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
	int64_t n = 0;
	cin>>n;
	vector<vector<int64_t>> arrays(n);
	int64_t minValue = INT64_MAX, minArrayIndex = -1;
	for(int i = 0; i < n; i++) {
		int64_t m = 0;
		cin>>m;
		for(int j = 0; j < m; j++) {
			int64_t num = 0;
			cin>>num;
			arrays[i].push_back(num);
		}
		sort(arrays[i].begin(), arrays[i].end());
		if(arrays[i][0] < minValue) {
			minValue = arrays[i][0];
			minArrayIndex = i;
		}
	}
	int64_t maxbeauty = 0;
	for(int i = 0; i < n; i++) {
		int64_t beauty = minValue;
		for(int j = 0; j < n; j++) {
			if(j == i) continue;
			beauty += arrays[j][1];
		}
		maxbeauty = max(maxbeauty, beauty);
	}
	cout<<maxbeauty<<endl;
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