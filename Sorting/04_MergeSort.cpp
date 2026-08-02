#include <bits/stdc++.h>
using namespace std;
void Merge(int arr[], int left, int mid, int right)
{
    int temp[100];
    int low = left, high = mid + 1, j = 0;
    while (left <= mid && high <= right)
    {
        if (arr[left] <= arr[high])
        {
            temp[j] = arr[left];
            left++;
            j++;
        }
        else
        {
            temp[j] = arr[high];
            high++;
            j++;
        }
    }
    while (left <= mid)
    {
        temp[j] = arr[left];
        left++;
        j++;
    }
    while (right >= high)
    {
        temp[j] = arr[high];
        high++;
        j++;
    }
}
void MergeSort(int arr[], int left, int right)
{
    int mid = (left + right) / 2;
    if (left >= right)
        return;
    MergeSort(arr, left, mid);
    MergeSort(arr, mid + 1, right);
    Merge(arr, left, mid, right);
}
int main()
{
    int arr[] = {2, 5, 1, 3, 4};
    MergeSort(arr,0,4);
    for (int i = 0; i < 5;i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}