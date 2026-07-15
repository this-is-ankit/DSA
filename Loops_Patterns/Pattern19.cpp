#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, j, n;
    cin >> n;
    for (i = n; i >= 1; i--)
    {
        for (j = i; j >=1; j--)
        {
            cout << "*";
        }
        for (j = 1; j <= 2 * (n - i) ; j++)
        {
            cout << " ";
        }
       for (j = i; j >=1; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (i = 1; i <=n; i++)
    {
        for (j = i; j >=1; j--)
        {
            cout << "*";
        }
        for (j = 1; j <= 2 * (n - i) ; j++)
        {
            cout << " ";
        }
       for (j = i; j >=1; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}