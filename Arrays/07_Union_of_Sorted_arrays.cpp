#include <bits/stdc++.h>
using namespace std;
vector<int> Union(vector<int> &a, vector<int> &b)
{
    int n1 = a.size(), n2 = b.size();
    int i = 0, j = 0;
    vector<int> temp;
    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
        {
            temp.push_back(a[i]);
            i++;
        }
        else if (a[i] > b[j])
        {
            temp.push_back(b[j]);
            j++;
        }
    }
    while (i < n1)
    {
        temp.push_back(a[i]);
    }
    while (j < n2)
    {
        temp.push_back(b[j]);
    }
    return temp;
}
int main()
{
    return 0;
}