#include <bits/stdc++.h>
using namespace std;
int Partition(vector<int> &v, int low, int high)
{
    int i = low, j = high, pivot = v[low];
    while (i < j)
    {
        while (v[i] <= pivot && i <= high - 1)
        {
            i++;
        }
        while (v[j] > pivot && j >= low + 1)
        {
            j--;
        }
        if (i < j)
            swap(v[i], v[j]);
    }
    swap(v[low] , v[j]);
    return j;
}
void Quicksort(vector<int> &v, int low, int high)
{
    if (low < high)
    {
        int pivot = Partition(v, low, high);
        Quicksort(v, low, pivot - 1);
        Quicksort(v, pivot + 1, high);
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int j;
        cin >> j;
        v.push_back(j);
    }
    Quicksort(v, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}