#include<bits/stdc++.h>
using namespace std;
int main () {
    int i,j,n;
    scanf("%d" ,&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout << j;
        }
        for(j=0; j<= n-i-1 ; j++){
            cout << " ";
        }
        for(j=0; j<= n-i-1 ; j++){
            cout << " ";
        }
        for(j=i;j>=1;j--){
            cout << j;
        }
        cout << endl;
    }
    return 0;
}