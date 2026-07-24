#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, j, i,top,bottom,left,right,mindistance,answer;
    cin >> n;
    int size = 2*n - 1;
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            top=i;
            left=j;
            bottom=size-1-i;
            right=size-1-j;
            mindistance = min(min(left,right) , min(top,bottom));
            answer = n - mindistance;
            cout << answer ;
        }
        cout << endl;
    }
    return 0;
}