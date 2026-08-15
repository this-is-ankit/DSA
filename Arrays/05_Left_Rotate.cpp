#include<bits/stdc++.h>
using namespace std;
void rotateleft(vector<int> &nums , int k){
    int n = nums.size();
    k%=n;
    reverse(nums[0], nums[k]);
    reverse(nums[k] , nums[n]);
    reverse(nums.begin() , nums.end());
}
int main(){
    return 0;
    vector<int>nums = {1,3,4,5,8,9,6};
    rotateleft(nums,3);
    for(auto it : nums){
        cout<< it << " ";
    }
return 0;
    
}
