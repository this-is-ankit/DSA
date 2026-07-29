#include<bits/stdc++.h>
using namespace std;
int main() {
    int n ,count =0;
    cin >> n;
    for(int i=1;i*i<=n;i++){
        if(n%i == 0) count++;
        if(n/i != i && n % (n/i) == 0) count++;
    }
    if(count==2) cout << "The number is  a prime number";
    else cout << "The number is not a prime a number";
    return 0;
}