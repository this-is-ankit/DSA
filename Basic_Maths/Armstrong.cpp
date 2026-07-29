#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int y = n,sum = 0 , count=0 ;
    while(n>0){
        int ld = n%10;
        count++;
        n /= 10;
    }
    n = y;
    cout << endl<< count << endl;
    while(n>0){
        int ld = n%10;;
        sum+=pow(ld,count);
        n /= 10;
    }
    if(sum == y) cout << "The number is an armstrong number";
    else cout << "the number is not an armstrong number";
}