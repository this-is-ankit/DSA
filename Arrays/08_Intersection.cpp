#include <bits/stdc++.h>
using namespace std;
vector<int> Intersection(vector<int> &a, vector<int> &b)
{
    int n1 = a.size(), n2 = b.size();
    int i = 0, j = 0;
    vector<int> temp;
    while (i < n1 && j < n2)
    {
        if (a[i] == b[j])
        {
            temp.push_back(a[i]);
            i++;
            j++;
        }
        else if (a[i] > b[j])
        {
            j++;
        }
        else
        {
            i++;
        }
    }
    return temp;
}
int main()
{
    vector<int> a = {1, 2, 2, 3, 3, 4, 5, 6};
    vector<int> b = {2, 3, 3, 5, 6, 6, 7};
    vector<int> temp = Intersection(a, b);
    for (auto it : temp)
    {
        cout << it << " ";
    }
    return 0;
}