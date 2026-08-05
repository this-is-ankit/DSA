#include <bits/stdc++.h>
using namespace std;
int secondLargest(int arr[], int n)
{
    int l = arr[0]; int s = arr[0];
    int elements[n], j = -1;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]<= s){
            s = arr[i];
        }
    }
    
    for (int i = 1; i < n; i++)
    {
        if (arr[i] >= s)
        {
            l = arr[i];
            j++;
            elements[j] = l;
        }
    }
    while (elements[j] == l  && j >= 0)
    {
        j--;
    }
    return elements[j];
}
int main()
{
    int n;
    cout << "Enter the number of the elements : ";
    cin >> n;
    if(n <= 0){
        cout << "Enter any valid size of the array";
        return 0;
    }
    int arr[n];
    cout << "Enter the elements one by one : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (n == 1)
    {
        cout << "The largest and second largest element is same : " << arr[n-1];
        return 0;
    }
    cout << "The Second largest element in the given array is : " << secondLargest(arr, n);
    return 0;
}