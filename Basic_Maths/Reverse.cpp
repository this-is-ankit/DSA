#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ld, n , rev = 0;
    cin  >> n;
    while (n != 0)
    {
        ld = n % 10;
        rev = rev * 10 + ld;
        n = n / 10;
    }
    cout << rev;
    return rev;
}
