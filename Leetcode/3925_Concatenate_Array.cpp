#include <bits/stdc++.h>
using namespace std;
vector<int> concatWithReverse(vector<int> &nums)
{
    vector<int> ans;
    int n = nums.size();
    for (int i : nums)
        ans.push_back(i);
    for (int i = n - 1; i >= 0; i--)
        ans.push_back(nums[i]);
    return ans;
}
int main()
{
    return 0;
}