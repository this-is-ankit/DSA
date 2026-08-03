#include <bits/stdc++.h>
using namespace std;
bool isValid(string s)
{
    int n = s.size();
    stack<char> st;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            st.push(s[i]);
        }
        else
        {
            if (st.empty())
                return false;
            char top = st.top();
            st.pop();
            if ((s[i] == ')' && top != '(') || (s[i] == '}' && top != '{') || (s[i] == ']' && top != '['))
                return false;
        }
    }
    return st.empty();
}


// This is one more solution that i fugured out, which uses no stack and makes the input string behave as stack

// # Intuition
// Since a valid string will always resolve its brackets sequentially, we can reuse the memory of the input string itself as our stack. This drops the auxiliary space from $O(N)$ to $O(1)$.

// # Approach
// 1. Use an integer `top` initialized to `-1` to represent the top of our in-place stack.
// 2. Iterate through the string. If it is an opening bracket, increment `top` and overwrite the string at that index.
// 3. If it is a closing bracket, verify `top` is valid and the character matches the required opening bracket, then decrement `top` (effectively popping it).
// 4. At the end, `top` must be `-1` for a perfectly balanced string.
//     bool isValid(string s) {
//         int top = -1;
//         for (char c : s) {
//             if (c == '(' || c == '{' || c == '[') {
//                 s[++top] = c;
//             } else {
//                 if (top == -1) return false;
//                 if (c == ')' && s[top] != '(') return false;
//                 if (c == '}' && s[top] != '{') return false;
//                 if (c == ']' && s[top] != '[') return false;
//                 top--;
//             }
//         }
//         return top == -1;
//     }

int main()
{
    string s = "({[{}]})";
    cout << isValid(s);
    return 0;
}