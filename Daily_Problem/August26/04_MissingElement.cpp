#include <bits/stdc++.h>
using namespace std;

vector<int> findMissingElements(vector<int> &nums)
{
    int n = nums.size();
    int s = nums[0], l = nums[0];
    for (int i = 0; i < n; i++)
    {
        if (nums[i] < s)
            s = nums[i];
        else if (nums[i] > l)
            l = nums[i];
    }
    vector<int> temp;
    while (s != l)
    {
        s++;
        if (s == l)
            return temp;
        int found = 0;
        for (int j = 0; j < n; j++)
            if (nums[j] == s)
                found++;
        if (!found)
        {
            temp.push_back(s);
        }
    }
    return temp;
}
int main()
{
    vector<int> arr = {5,1};
    vector<int> temp = findMissingElements(arr);
    for (auto it : temp)
    {
        cout << it << " ";
    }
    return 0;
}