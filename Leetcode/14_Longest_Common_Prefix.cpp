#include <bits/stdc++.h>
using namespace std;
string longestCommonPrefix(vector<string> &strs)
{
    string s = strs[0];
    string temp;
    for(auto it : strs){
        int i = 0;
      while (it[i] == s[i])
      {
        temp[i] = it[i];
        i++;
      } 
    }
    return temp;
}
int main()
{
    vector<string> strs = {"flower","flow","flight"};
    string output = longestCommonPrefix(strs);
    for(auto c : output){
        cout << c << " ";
    }
    return 0;
}