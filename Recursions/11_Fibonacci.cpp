#include<bits/stdc++.h>
using namespace std;
//  ---------------------------/// Without recursion /// ------------- 
int fib(int n){
    if(n<=0) return 0;
    else if(n == 1) return 1;
    int a=0, b = 1 , sum = 0;
    for(int i =2; i<= n; i++){
        sum=a+b;
        a =b;
        b = sum;
    }
    return sum;
}
int main(){
    int n;
    cin  >> n;
    cout  << fib(n);
}