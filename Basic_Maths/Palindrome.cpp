#include<bits/stdc++.h>
using namespace std;
int main(){
    int ld, n ,original, rev = 0;
    cin  >> n;
    original = n;
    while (n != 0)
    {
        ld = n % 10;
        rev = rev * 10 + ld;
        n = n / 10;
    }
    if (original == rev) cout << "true";
    else cout << "false";
    return rev;
}