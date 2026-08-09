#include <bits/stdc++.h>
using namespace std;
int dp[101][101];
int suf[101];
int n;
int solve(int i, int m)
{
    if (i >= n)
        return 0;
    if (i + 2 * m >= n)
        return suf[i];
    if (dp[i][m] != -1)
        return dp[i][m];

    int ans = 0;
    for (int x = 1; x <= 2 * m; x++)
    {
        ans = max(ans, suf[i] - solve(i + x, max(m, x)));
    }
    return dp[i][m] = ans;
}
int stoneGameII(vector<int> &piles)
{
    n = piles.size();
    memset(dp, -1, sizeof(dp));

    suf[n - 1] = piles[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        suf[i] = suf[i + 1] + piles[i];
    }

    return solve(0, 1);
}
int main()
{
    vector<int> piles = {2,7,9,4,4};
    
    return 0;
}