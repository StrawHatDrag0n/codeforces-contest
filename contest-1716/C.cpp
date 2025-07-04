#include <bits/stdc++.h>
#define ld long double
#define lli long long int
#define ulli unsigned long long int
#define REP(i, start, end) for(int i = start; i < end; i++)
#define REPE(i, start, end) for(int i = start; i <= end; i++)
#define RREP(i, start, end) for(int i = start; i > end; i--)
#define RREPE(i, start, end) for(int i = start; i >= end; i--)

using namespace std;

int f(int i, int j, int n, int m, int waitTime, int cnt, int direction, vector<vector<int>> &arr, vector<vector<bool>> &visited, vector<vector<vector<int>>> &dp) {
	if(cnt <= 0) return waitTime;
	if(dp[i][j][direction] != -1) return dp[i][j][direction];
	int up = 1e9, down = 1e9, left = 1e9, right = 1e9;
	if(j+1 < m && !visited[i][j+1]) {
		visited[i][j+1] = true;
		if(waitTime >= arr[i][j+1]) right = f(i, j+1, n, m, waitTime + 1, cnt-1, 0, arr, visited, dp);
		else right = f(i, j+1, n, m, waitTime + (arr[i][j+1] - waitTime) + 1, cnt-1, 0, arr, visited, dp);
		visited[i][j+1] = false;
	}
	if(i+1 < n && !visited[i+1][j]) {
		visited[i+1][j] = true;
		if(waitTime >= arr[i+1][j]) down = f(i+1, j, n, m, waitTime+1, cnt-1, 1, arr, visited, dp);
		else down = f(i+1, j, n, m, waitTime+(arr[i+1][j] - waitTime) + 1, cnt-1, 1, arr, visited, dp);
		visited[i+1][j] = false;
	}
	if(j-1 >= 0 && !visited[i][j-1]) {
		visited[i][j-1] = true;
		if(waitTime >= arr[i][j-1]) left = f(i, j-1, n, m, waitTime+1, cnt-1, 2, arr, visited, dp);
		else left = f(i, j-1, n, m, waitTime+(arr[i][j-1] - waitTime) + 1, cnt-1, 2, arr, visited, dp);
		visited[i][j-1] = false;
	}
	if(i-1 >= 0 && !visited[i-1][j]) {
		visited[i-1][j] = true;
		if(waitTime >= arr[i-1][j]) up = f(i-1, j, n, m, waitTime + 1, cnt-1, 3, arr, visited, dp);
		else up = f(i-1, j, n, m, waitTime+(arr[i-1][j] - waitTime) + 1, cnt-1, 3, arr, visited, dp);
		visited[i-1][j] = false;
	}
	bool flag = false;
	REP(i, 0, n) REP(j, 0, m) if(!visited[i][j]) {flag = true; break;}
	if(!flag) return dp[i][j][direction] = waitTime;

	return dp[i][j][direction] = min(up, min(down, min(left, right)));
}

void solve() {
	int n = 2, m = 0;
	cin>>m;
	vector<vector<int>> arr(n, vector<int>(m, -1));
	// vector<vector<int>> dp(n, vector<int>(m, -1));
	vector<vector<bool>> visited(n, vector<bool>(m, false));
	int tt = 0;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			cin>>arr[i][j];
			tt += arr[i][j];
		}
	}
	vector<vector<vector<int>>> dp(n, vector<vector<int>>(m, vector<int>(5, -1)));
	visited[0][0] = true;
	cout<<f(0, 0, n, m, 0, n*m-1, 4, arr, visited, dp)<<endl;

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