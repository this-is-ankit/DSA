#include<bits/stdc++.h>
using namespace std ;
int main() {
    int i , j , n ;
    scanf("%d" , &n);
    for(i = n ; i > 0 ; i--){
        for(j= 1 ; j<=i; j++){
            printf("%d" ,j);
        }
        printf("\n");
    }
    return 0;
}