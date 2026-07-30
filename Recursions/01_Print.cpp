#include <bits/stdc++.h>
using namespace std;
void recursion_print(int i)
{
    cout << "I love India"<< endl;
    if (i == 1)
        return;
    else
    {
        recursion_print(i - 1);
    }
}
int main()
{
    recursion_print(16);
    return 0;
}