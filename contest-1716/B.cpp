#include <bits/stdc++.h>
#define ld long double
#define lli long long int
#define ulli unsigned long long int
#define REP(i, start, end) for(int i = start; i < end; i++)
#define REPE(i, start, end) for(int i = start; i <= end; i++)
#define RREP(i, start, end) for(int i = start; i > end; i--)
#define RREPE(i, start, end) for(int i = start; i >= end; i--)

using namespace std;

void print_vector(vector<int> &arr) {
	for(int val: arr) cout<<val<<" ";
	cout<<endl;
}

void solve() {
	int n = 0;
	cin>>n;
	vector<int> res;

	for(int i = 1; i <= n; i++) res.push_back(i);
	cout<<n<<endl;
	for(int i = 0; i < n-1; i++) {
		print_vector(res);
		swap(res[i], res[i+1]);
	}
	print_vector(res);

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