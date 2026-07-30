#include <bits/stdc++.h>
using namespace std;
bool palindrome(string s)
{
    if (s.size() <= 1) return true;

    if (s.front() != s.back())
    {
        return false;
    }

    return palindrome(s.substr(1,s.size()-2));
}
int main()
{
    string s;
    cin >> s;
    // cout<< s.length();
    // cout<< s.size();
    cout << palindrome(s);
    return 0;
}