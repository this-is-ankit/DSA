#include<bits/stdc++.h>
using namespace std ;
int main() {
    int i , j , n ;
    scanf("%d" , &n);
    for(i = n ; i > 0 ; i--){
        for(j= 0 ; j< i; j++){
            printf("*");
        }
        printf("\n");
    }
}