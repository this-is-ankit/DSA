#include<bits/stdc++.h>
using namespace std;
int main (){
    int i,j,n;
    char c,k='A';
    cin >> n;
    k+=(n-1);
    for(i = k ;i>= 'A';i--){
        for(c = i;c <= k;c++){
            cout << c << " ";
            
        }
        cout << endl;
    }
}