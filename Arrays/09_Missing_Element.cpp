#include <bits/stdc++.h>
using namespace std;
int missing(vector<int> &nums)
{
    int n = nums.size();
    int i = 0, j = n - 1;
    int val = 1;
    while (i <= j)
    {
        if (nums[i] == val || nums[j] == val)
        {
            val++;
            i = 0;
            j = n - 1;
        }
        else
        {
            i++;
            j--;
        }
    }
    return val;
}
int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6, 8};
    cout << missing(nums);
    return 0;
}