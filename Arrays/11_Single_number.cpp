#include <bits/stdc++.h>
using namespace std;
int singleNumber(vector<int> &nums)
{
    int h = nums.size() - 1, i = 0, l = 1;
    int temp = nums[0];
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
            l = i + 1;
        }
    }
    return temp;
}
int main()
{
    vector<int> nums = {2, 2, 1};
    cout << singleNumber(nums);
    return 0;
}