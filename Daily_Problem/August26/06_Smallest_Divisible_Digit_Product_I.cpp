// 3345. Smallest Divisible Digit Product I
// Easy
// Topics
// premium lock iconCompanies
// Hint

// You are given two integers n and t. Return the smallest number greater than or equal to n such that the product of its digits is divisible by t.

// Example 1:

// Input: n = 10, t = 2

// Output: 10

// Explanation:

// The digit product of 10 is 0, which is divisible by 2, making it the smallest number greater than or equal to 10 that satisfies the condition.

// Example 2:

// Input: n = 15, t = 3

// Output: 16

// Explanation:

// The digit product of 16 is 6, which is divisible by 3, making it the smallest number greater than or equal to 15 that satisfies the condition.

#include <bits/stdc++.h>
using namespace std;

int smallestNumber(int n, int t) {
        while (true) {
            int temp = n;
            int prod = 1;
            
            while (temp > 0) {
                prod *= (temp % 10);
                temp /= 10;
            }
            
            if (prod % t == 0) return n;
            n++;
        }
    }
int main()
{
    int n = 15, t = 3;
    cout << smallestNumber(n, t);
    return 0;
}