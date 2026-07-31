#include <bits/stdc++.h>
using namespace std;
// int hashh[13] = {0}; // this can maximum go upto 10^7 outside main like hashh[1000000] that is Globally
// Beyond this it will give  a segmentation error

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
    int hashh[13] = {0}; // this can maximum go upto 10^6 inside main like hashh[1000000]
    // Beyond this it will give  a segmentation error
    for (int i = 0; i < n; i++)
    {
        hashh[arr[i]] += 1;
    }
    cout << "Enter the total number of queries : ";
    int q;
    cin >> q;
    cout << "Enter the each querie : ";

    while (q--)
    {
        int num;
        cin >> num;
        cout  << num << " appears " << hashh[num] << " times" << endl;
    }
    return 0;
}