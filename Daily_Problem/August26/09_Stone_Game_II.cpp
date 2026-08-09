#include<bits/stdc++.h>
using namespace std;
int dp[101][101];
    int suf[101];
    int n;
int solve(int i, int m) {
        if (i >= n) return 0;
        if (i + 2 * m >= n) return suf[i];
        if (dp[i][m] != -1) return dp[i][m];

        int ans = 0;
        for (int x = 1; x <= 2 * m; x++) {
            ans = max(ans, suf[i] - solve(i + x, max(m, x)));
        }
        return dp[i][m] = ans;
    }
int main(){
    return 0;
}