#include<bits/stdc++.h>
using namespace std;
int strStr(string haystack, string needle) {
        int pos = haystack.find(needle);
        return pos != string::npos ? pos : -1;
    }
int main(){
    string haystack = "leetcode";
    string needle = "sad";
    cout << strStr(haystack,needle);
    return 0;
}