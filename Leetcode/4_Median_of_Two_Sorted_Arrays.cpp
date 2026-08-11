// 4. Median of Two Sorted Arrays
// Solved
// Hard
// Topics
// premium lock iconCompanies

// Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

// The overall run time complexity should be O(log (m+n)).

// Example 1:

// Input: nums1 = [1,3], nums2 = [2]
// Output: 2.00000
// Explanation: merged array = [1,2,3] and median is 2.

// Example 2:

// Input: nums1 = [1,2], nums2 = [3,4]
// Output: 2.50000
// Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.

// Constraints:

//     nums1.length == m
//     nums2.length == n
//     0 <= m <= 1000
//     0 <= n <= 1000
//     1 <= m + n <= 2000
//     -106 <= nums1[i], nums2[i] <= 106
#include <bits/stdc++.h>
using namespace std;
double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
{
    if (nums1.size() > nums2.size())
        return findMedianSortedArrays(nums2, nums1);

    int n1 = nums1.size(), n2 = nums2.size();
    int l = 0, r = n1;

    while (l <= r)
    {
        int i1 = (l + r) / 2;
        int i2 = (n1 + n2 + 1) / 2 - i1;

        int max1 = (i1 == 0) ? INT_MIN : nums1[i1 - 1];
        int min1 = (i1 == n1) ? INT_MAX : nums1[i1];

        int max2 = (i2 == 0) ? INT_MIN : nums2[i2 - 1];
        int min2 = (i2 == n2) ? INT_MAX : nums2[i2];

        if (max1 <= min2 && max2 <= min1)
        {
            if ((n1 + n2) % 2 == 0)
            {
                return (max(max1, max2) + min(min1, min2)) / 2.0;
            }
            else
            {
                return max(max1, max2);
            }
        }
        else if (max1 > min2)
        {
            r = i1 - 1;
        }
        else
        {
            l = i1 + 1;
        }
    }
    return 0.0;
}
int main()
{   
    vector<int> nums1 = {1,2};
    vector<int> nums2 = {3,4};
    cout<<findMedianSortedArrays(nums1,nums2);
    return 0;
}