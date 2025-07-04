#include <bits/stdc++.h>
#define ld long double
#define lli long long int
#define ulli unsigned long long int
#define REP(i, start, end) for(int i = start; i < end; i++)
#define REPE(i, start, end) for(int i = start; i <= end; i++)
#define RREP(i, start, end) for(int i = start; i > end; i--)
#define RREPE(i, start, end) for(int i = start; i >= end; i--)

using namespace std;

pair<int, int> getDiffTime(pair<int, int> A, pair<int, int> B) {
	if(A.first == B.first && A.second <= B.second) {
		return {0, B.second - A.second};
	}

	if(A.first < B.first && A.second <= B.second) {
		return {B.first - A.first, B.second - A.second};
	}

	if(A.first < B.first && A.second > B.second) {
		return {B.first - A.first - 1, 60 + (B.second - A.second)};
	}

	if(A.first > B.first) {
		pair<int, int> diff1 = getDiffTime(A, {24, 0});
		pair<int, int> diff2 = getDiffTime({0, 0}, B);
		return {(diff1.first + diff2.first) + (diff1.second+diff2.second)/60, (diff1.second+diff2.second)%60};
	}

	if(A.first == B.first && A.second > B.second) {
		pair<int, int> diff1 = getDiffTime(A, {24, 0});
		pair<int, int> diff2 = getDiffTime({0, 0}, B);
		return {(diff1.first + diff2.first) + (diff1.second+diff2.second)/60, (diff1.second+diff2.second)%60};
	}

}

void solve() {
	int n = 0, h = 0, m = 0;
	cin>>n>>h>>m;

	vector<int> H(n), M(n);
	REP(i, 0, n) cin>>H[i]>>M[i];

	pair<int, int> diffTime, ansTime;
	ansTime = {24, 60};
	REP(i, 0, n) {
		diffTime = getDiffTime({h, m}, {H[i], M[i]}); 
		if((diffTime.first < ansTime.first) || (diffTime.first == ansTime.first && diffTime.second < ansTime.second)) {
			ansTime = diffTime;
		}
	}

	cout<<ansTime.first<<" "<<ansTime.second<<endl;
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