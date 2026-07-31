#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of elements of array : ";
    cin  >> n;
    int arr[n];
    map<int,int> mp;
    cout << "Enter each elements of array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mp[arr[i]]++;
    }
    int q;
    cout << "Enter the total number of queries : ";
    cin >> q;
    cout << "Enter the query one by one : ";
    while (q--)
    {   
        int number;
        cin >> number;
        cout<< number << " appears " << mp[number] << " times" << endl;
    }
    return 0;
}