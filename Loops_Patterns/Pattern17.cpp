#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, j, n;
    char c, k = 'A';
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (c = 'A'; c <= k; c++)
        {
            cout << c;
        }
        k++;
        c-=2;
        for (c; c >= 'A'; c--)
        {
            cout << c;
        }
        cout << endl;
    }
}