#include <bits/stdc++.h>
using namespace std;
bool isValid(string s)
{
    int n = s.size(), j;
    stack<char> st;
    for (int i = 0; i < n; i++)
    {
        j = i;
        if (s[j] == '(' || '{' || '[')
        {
            st.push(s[j]);
        }
        else
        {
            char top = st.top();
            st.pop();
            if ((s[j] == ')' && top != '(') || (s[j] == '}' && top != '{') || (s[j] == ']' && top != '['))
                return false;
        }
    }
    return st.empty();
}

int main()
{
    string s = "({[{}]})";
    cout << isValid(s);
    return 0;
}