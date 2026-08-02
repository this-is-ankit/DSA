#include <bits/stdc++.h>
using namespace std;
void mergeit(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    vector<int> temp1, temp2;
    for (int i = 0; i < m; i++)
    {
        temp1.push_back(nums1[i]);
    }
    for (int i = 0; i < n; i++)
    {
        temp1.push_back(nums2[i]);
    }
    int low = 0, high = m;
    while (low < m && high < m + n)
    {
        if (temp1[low] <= temp1[high])
        {
            temp2.push_back(temp1[low]);
            low++;
        }
        else
        {
            temp2.push_back(temp1[high]);
            high++;
        }
    }
    while (low < m)
    {
        temp2.push_back(temp1[low]);
        low++;
    }
    while (high < m + n)
    {
        temp2.push_back(temp1[high]);
        high++;
    }

    for (int i = m; i < m + n; i++)
    {
        nums1[i] = temp2[i - m];
    }
}

int main()
{
    vector<int> nums1 = {1, 2,3, 0, 0, 0};
    vector<int> nums2 = {2,5,6};
    int m =3,n=3;
    mergeit(nums1,m,nums2,n);
    for(auto it : nums1){
        cout << it << "";
    }

}