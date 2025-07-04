// A. Escalator Conversations
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
	int n = 0, m = 0, k = 0, H = 0;
	cin >> n >> m >> k >> H;

	vector<int> A(n);
	for(int i = 0; i < n; i++) {
		cin >> A[i];
	}
	int ans = 0;
	for(int i = 0; i < n; i++) {
		bool flag = false;
		for(int a = 1; a <= m && !flag; a++) {
			for(int b  = a+1; b <= m && !flag; b++) {
				if(abs(H-A[i]) == k * abs(a - b)) {
					ans++;
					flag = true;
					break;
				}	
			}
		}
	}
	cout << ans << endl;

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