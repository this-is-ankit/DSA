#include <bits/stdc++.h>
using namespace std;
// --------Brute Force----------//
// int missing(vector<int> &nums)
// {
//     int n = nums.size();
//     int i = 0, j = n - 1;
//     int val = 1;
//     while (i <= j)
//     {
//         if (nums[i] == val || nums[j] == val)
//         {
//             val++;
//             i = 0;
//             j = n - 1;
//         }
//         else
//         {
//             i++;
//             j--;
//         }
//     }
//     return val;
// }


// //--------Better solutin------------//
// we can use hashing, like iterate every element of array and store hash[arr[i]] = 1
// and then again a loop for range 1 to n and if hash[i] == 0 then return that number


// The most optimal can be done in two ways----------//
//-----The sum part ----//
// the sum of first n terms of natural number is n*(n+1)/2
// so we sum up all elements and then subtract its value form above one and then 
// the difference is the number that was missing

// The other one is using XOR operation//
// xor operation with the same number canclels each other
int missing(vector<int> &nums)
{
    int xor1 = 0,xor2=0;
    for (int i = 0; i < nums.size(); i++)
    {
        xor2 = xor2^nums[i];
        xor1 = xor1^(i+1);
    }
    xor1^=nums.size()+1;
    return xor1^xor2;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6, 8};
    cout << missing(nums);
    return 0;
}