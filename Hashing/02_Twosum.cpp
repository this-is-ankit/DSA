#include<bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int> nums, int target) {
    vector <int> a;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = 0; j < nums.size(); j++)
        {
            if(i == j) continue;
            if(nums[i] + nums[j] == target) {a.push_back(i); a.push_back(j); return a;}
        }
    }
    return a;
}
int main( ){
    vector <int> nums;
    int n;
    cin  >> n;
    for (int  i = 0; i < n; i++)
    {   int j;
        cin >> j;
        nums.push_back(j);
    }
    int target;
    cin >> target;
    vector <int> a = twoSum(nums,target);
    for(auto it : a) {
        cout << it <<  endl;
    }
    return 0;
}