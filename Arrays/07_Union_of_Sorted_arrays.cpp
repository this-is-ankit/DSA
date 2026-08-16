#include <bits/stdc++.h>
using namespace std;
vector<int> Union(vector<int> &a, vector<int> &b)
{
    int n1 = a.size(), n2 = b.size();
    int i = 0, j = 0;
    vector<int> temp;
    while (i < n1 && j < n2)
    {
        if (a[i] <= b[j])
        {
            if (temp.size() == 0 || a[i] != temp.back())
                temp.push_back(a[i]);
            i++;
        }
        else
        {
            if (temp.size() == 0 || b[j] != temp.back())
                temp.push_back(b[j]);
            j++;
        }
    }
    while (i < n1)
    {
        if (temp.size() == 0 || a[i] != temp.back())
            temp.push_back(a[i]);
        i++;
    }
    while (j < n2)
    {
        if (temp.size() == 0 || b[j] != temp.back())
            temp.push_back(b[j]);
        j++;
    }
    return temp;
}
int main()
{
    vector<int> a = {1, 2, 5, 6, 7, 8};
    vector<int> b = {1, 2, 3, 5, 8, 9, 11};
    vector<int> temp = Union(a, b);
    for (auto it : temp)
    {
        cout << it << " ";
    }
    return 0;
}