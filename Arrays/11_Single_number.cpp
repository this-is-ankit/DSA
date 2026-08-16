#include <bits/stdc++.h>
using namespace std;
int singleNumber(vector<int> &nums)
{
    int l = 1, h = nums.size() - 1, i = 0;
    int temp = nums[i];
    while (l <= h)
    {
        if (nums[l] != temp && nums[h] != temp)
        {
            l++;
            h--;
        }
        else if (i < nums.size())
        {
            i++;
            temp = nums[i];
        }
    }
    return temp;
}
int main()
{
    vector<int> nums = {4, 1, 2, 1, 2};
    cout << singleNumber(nums);
    return 0;
}