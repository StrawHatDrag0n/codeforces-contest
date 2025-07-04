// D. Balanced Round
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
	vector<int> A(n);
	for(int i = 0; i < n; i++) {
		cin >> A[i];
	}
	sort(A.begin(), A.end());
	vector<int> arr(n);
	arr[0] = 1;
	vector<int> len;  
	for(int i = 1; i < n; i++) {
		if(A[i] - A[i-1] <= k) {
			arr[i] = arr[i-1] + 1;
		} else {
			len.push_back(arr[i-1]);
			arr[i] = 1;
		}
	}
	len.push_back(arr[n-1]);
	sort(len.begin(), len.end());
	int ops = 0;
	for(int i = 0; i < len.size()-1; i++) {
		ops += len[i];
	}
	cout << ops << endl;

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