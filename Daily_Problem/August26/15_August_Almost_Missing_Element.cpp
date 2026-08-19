#include<bits/stdc++.h>
using namespace std;
int largestInteger(vector<int> &nums,int k){
    if(nums.empty()) return 0;
    if(k> nums.size()) return;
    int i=0;
    int hash[INT_MAX] = {0};
    while (i<=nums.size() - k)     
    {
        for (int j = i; j < k; j++)
        {
            
           hash[nums[j]]++;
        }
        i++;
    }
    for(auto num : hash){
     return (num==1);
    }
    
}
int main(){
    vector<int> nums = {3,9,2,1,7};
    return 0;
}