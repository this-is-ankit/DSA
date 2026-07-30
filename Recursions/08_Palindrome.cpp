#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(string s)
{   // This solution fails in leetcode because it runs a very massive testcase and the recursive call and the substr funcion causes the lack of memory
    // When i ran the task it said Memory limit exceeded, it is because the sustr on every call created a new copy of the string from the indices it takes as argument
    // Now for a very massive test case, it will break the memory 
    // Therefore, in the 09 file I did this with non recursive way
        
        if (s.length() <= 1) return true;

        
        if (!isalnum(s.front())) {
            return isPalindrome(s.substr(1)); 
        }

        
        if (!isalnum(s.back())) {
            return isPalindrome(s.substr(0, s.length() - 1));
        }

        if (tolower(s.front()) != tolower(s.back())) {
            return false;
        }
        return isPalindrome(s.substr(1, s.length() - 2));
    }
int main()
{
    string s;
    cin >> s;
    // cout << s.front();
    // cout << s.back();
    // cout<< s.length() << endl;
    // cout<< s.size() << endl;
    cout << isPalindrome(s);
    return 0;
}
