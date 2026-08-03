#include<bits/stdc++.h>
using namespace std;
int Largest(int arr[] , int n){
    int l = arr[0];
    for (int i = 0; i < n; i++)
    {
        if(arr[i] > l) l = arr[i];
    }
return l;
}
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "The largest element in the given array is : " << Largest(arr,n);
    return 0;
}