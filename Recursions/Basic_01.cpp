#include <bits/stdc++.h>
using namespace std;
void recursion_print(int n,  int i)
{
    cout << n << endl;
    // cout << "I love India"<< endl;
    if (i == 1)
        return;
    else
    {
        recursion_print(n,i - 1);
    }
}
int main()
{
    recursion_print(4 , 16);
    return 0;
}