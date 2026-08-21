#include<bits/stdc++.h>
using namespace std;
int digitFrequencyScore(int n) {
    map<int,int> mp;
    while (n>0)
    {
        mp[n%10]++;
        n/=10;
    }
    int k = mp.size();
    int sum=0;
    for (auto it : mp) {
        sum+= it.first*it.second;
}
    
    return sum;
    }
int main() {

    return 0;
}