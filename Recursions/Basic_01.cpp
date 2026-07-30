#include <bits/stdc++.h>
using namespace std;
void recursion_print(int n)
{
    cout << n << endl;
    cout << "I love India"<< endl;
    if (n == 1)
        return;
    else
    {
        recursion_print(n - 1);
    }
}
int main()
{
    recursion_print(4);
    return 0;
}