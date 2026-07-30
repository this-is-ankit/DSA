#include <bits/stdc++.h>
using namespace std;
int s = 0;
int sum(int n)
{
    if (n == 0)
    {
        return s;
    }
    s += n;
    return sum(n - 1);
}
int main()
{
    int n;
    cin >> n;
    cout  << sum(n) << endl;
    return 0;
}