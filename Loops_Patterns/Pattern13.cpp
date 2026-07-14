#include<bits/stdc++.h>
using namespace std;
int main (){
    int i,j,k=0,n;
    cin >> n;
    for(i = 1 ;i<=n;i++){
        for(j=1;j<=i;j++){
            k++;
            cout << k << " ";
        }
        cout << endl;
    }
}