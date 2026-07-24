#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, j, n;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i == n || i == 1)
            {
                for (j = 1; j <= n; j++)
                    cout << "*";
            }
            if (j == 1 || j == n)
                cout << "*";

            else
            {
                cout << "_";
            }
        }
        cout << endl;
    }
}