#include <bits/stdc++.h>
// Functional way of the recursion which return the answer from the recursive function instead of directly printing the value of carrying the answer in its parameter
using namespace std;
int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n + sum(n - 1);
}
int main()
{
    int n;
    cin >> n;
    cout << sum(n) << endl;
    return 0;
}