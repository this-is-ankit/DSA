#include<bits/stdc++.h>
//Parameterized form of the recursiion where is answer is directly prined by the recusive function instead of returnig any datatype
using namespace std;
void sumPrint(int i,int n){
    if(i < 0){
        cout << n << endl;
        return;
    }
    sumPrint(i-1,n+i);
}
int main(){
    int i;
    cin >>  i;
    sumPrint(i,0);
    return 0;
}