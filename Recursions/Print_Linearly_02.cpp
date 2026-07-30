#include <bits/stdc++.h>
using namespace std;
void recursion_print(int i)
{
    cout << i << endl;
    if (i == 1)
        return;
    else
    {
        recursion_print(i - 1);
    }
}
int main()
{
    int n;
    cout << "Enter the number : ";
    cin  >> n;
    recursion_print(n);
    return 0;
}