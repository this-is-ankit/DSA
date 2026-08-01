#include <bits/stdc++.h>
using namespace std;
int getEffectiveScore(vector<int>& nums, int left, int right) {
        // Base case: only one element left, the player has to take it
        if (left == right) {
            return nums[left];
        }
        
        // If the player picks the left element, they gain nums[left].
        // But the next turn belongs to the opponent, who will play optimally 
        // on [left+1, right], reducing our effective score.
        int pickLeft = nums[left] - getEffectiveScore(nums, left + 1, right);
        
        // Same logic if the player picks the right element
        int pickRight = nums[right] - getEffectiveScore(nums, left, right - 1);
        
        // The player plays optimally, so they pick the choice that yields the MAX score
        return max(pickLeft, pickRight);
    }
bool predictTheWinner(vector<int>& nums) {
        // If the final score difference is >= 0, Player 1 wins (or ties)
        return getEffectiveScore(nums, 0, nums.size() - 1) >= 0;
    }
int main()
{
    return 0;
}