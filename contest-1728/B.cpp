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

	vector<int> arr(n);
	arr[n-1] = n;
	arr[n-2] = n-1;
	if(n%2 == 0) {
		for(int i = 0, j = n-2; i < n-2; i++, j--) arr[i] = j;
	} else {
		for(int i = 0; i < n-2; i++) arr[i] = i+1;
		for(int i = n-3; i > 0; i-=2) {
			swap(arr[i], arr[i-1]);
		}
	}
	for(int val: arr) cout<<val<<" ";
	cout<<endl;
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