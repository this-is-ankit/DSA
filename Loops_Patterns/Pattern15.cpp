#include<bits/stdc++.h>
using namespace std;
int main (){
    int i,j,n;
    char c,k='A';
    cin >> n;
    for(i = 0 ;i<n ; i++){
        k++;
    }
    for(i = 0 ;i<n;i++){
       
        for(c = 'A';c < k;c++){
            cout << c;
            
        }
         k--;
        cout << endl;
    }
}