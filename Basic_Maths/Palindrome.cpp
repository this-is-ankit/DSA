#include <bits/stdc++.h>
using namespace std;
int main()
{
    int rev = 0, x;
    cin >> x;
    int original = x;
    while (x != 0)
    {
        int ld = x % 10;
        if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && ld > 7))
        {
            return 0;
        }
        if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && ld < -8))
        {
            return 0;
        }
        rev = rev * 10 + ld;
        x = x / 10;
    }
    if(original == rev) {cout << "true" ; return 1  ;}
    else {cout << "false";return 0;}
}