#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cout << "Enter the elements of array : " << endl;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int hashh[13] = {0};
    for (int i = 0; i < n; i++)
    {
        hashh[arr[i]] += 1;
    }
    cout << "Enter the number of queries : ";
    int q;
    cin >> q;
    cout << "Enter the each querie : ";

    while (q--)
    {
        int num;
        cin >> num;
        cout  << num << " appears " <<hashh[num] << " times" << endl;
    }
    return 0;
}