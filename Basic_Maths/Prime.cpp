#include<bits/stdc++.h>
using namespace std;
int main() {
    int n ,count =0;
    cin >> n;
    for(int i=1;i<=sqrt(n)/2;i++){
        if(n%i == 0) count++;
    }
    if(count!=2) cout << "The number is not a prime number";
    else cout << "The number is  a prime a number";
    return 0;
}