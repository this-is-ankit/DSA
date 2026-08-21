#include<bits/stdc++.h>
using namespace std;
int digitFrequencyScore(int n) {
    unordered_map<int,int> mp;
    while (n>0)
    {
        mp[n%10]++;
        n/=10;
    }
    int k = mp.size();
    int sum=0;
    for(int i = 0 ; i<k ; i++){
        sum+= i*mp[i];
    }
    return sum;
    }
int main() {

    return 0;
}