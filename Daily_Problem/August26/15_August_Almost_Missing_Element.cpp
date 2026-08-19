#include<bits/stdc++.h>
using namespace std;
int largestInteger(vector<int>& nums, int k) {
    int n = nums.size();
    if (k > n) return -1;

    unordered_map<int, int> subarray_count;

    // Count in how many distinct subarrays of size k each number appears
    for (int i = 0; i <= n - k; i++) {
        unordered_set<int> unique_in_window;
        for (int j = i; j < i + k; j++) {
            unique_in_window.insert(nums[j]);
        }
        for (int val : unique_in_window) {
            subarray_count[val]++;
        }
    }

    int ans = -1;
    for (auto& [val, count] : subarray_count) {
        if (count == 1) {
            ans = max(ans, val);
        }
    }

    return ans;
}
int main(){
    vector<int> nums = {3,9,2,1,7};
    cout << largestInteger(nums,3);
    return 0;
}