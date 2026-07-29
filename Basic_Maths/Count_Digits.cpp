#include<bits/stdc++.h>
using namespace std;
int main () {
    int N, count = 0;
    cin >> N;
    while(N > 0 ){
        N = N/10;
        count++;
    }
    
    return count;
}