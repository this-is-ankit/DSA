#include <bits/stdc++.h>
using namespace std;
void Merge(int arr[], int left, int mid, int right)
{
    int temp[100];
    int low = left, high = mid + 1, j = 0;
    while (low <= mid && high <= right)
    {
        if (arr[low] <= arr[high])
        {
            temp[j] = arr[low];
            low++;
            j++;
        }
        else
        {
            temp[j] = arr[high];
            high++;
            j++;
        }
    }
    while (low <= mid)
    {
        temp[j] = arr[low];
        low++;
        j++;
    }
    while (right >= high)
    {
        temp[j] = arr[high];
        high++;
        j++;
    }

    for (int i = left; i <= right; i++)
    {
        arr[i] = temp[i - left];
    }
}
void MergeSort(int arr[], int left, int right)
{
    if (left >= right)
        return;
    int mid = (left + right) / 2;

    MergeSort(arr, left, mid);
    MergeSort(arr, mid + 1, right);
    Merge(arr, left, mid, right);
}
int main()
{
    int arr[] = {2, 5, 1, 3, 4};
    MergeSort(arr, 0, 4);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}