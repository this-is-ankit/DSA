#include <bits/stdc++.h>
using namespace std;
void sortColors(vector<int> &nums)
{
    int count0 = 0, count1 = 0, count2 = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 0)
            count0++;
        if (nums[i] == 1)
            count1++;
        if (nums[i] == 2)
            count2++;
    }
    int i = 0, j = (count0 + count1) - count0, k = (count0 + count1 + count2) - count0;

    while (i < count0 || j < count0 + count1 || k < count0 + count1 + count2)
    {
        nums[i]=0;
        i++;
        nums[j] =1;
        j++;
        nums[k]=2;
        k++;
    }
}
int main()
{
    vector<int> nums = {0,1,2,0,1,2,1,2,0};
    sortColors(nums);
    for(auto it : nums){
        cout << it << " ";
    }
    return 0;
}