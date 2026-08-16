#include <bits/stdc++.h>
using namespace std;
void moveZeroes(vector<int> &nums)
{
    if (nums.empty())
        return;
    int n = nums.size();
    int i = -1;
    for (int j = 0; j < n; j++)
    {
        if (nums[j] != 0)
        {
            i++;
            nums[i] = nums[j];
        }
    }
    i++;
    while (i < n)
    {
        nums[i] = 0;
        i++;
    }
}
int main()
{
    vector<int> nums = {2, 0, 1, 5, 4, 0, 0, 0, 1, 0, 8, 0};
    moveZeroes(nums);
    for (auto it : nums)
    {
        cout << it << " ";
    }
    return 0;
}