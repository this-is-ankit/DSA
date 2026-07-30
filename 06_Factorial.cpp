#include<bits/stdc++.h>
using namespace std;
int fibonacci(int n) {
    if(n < 0) {
        cout << "Invalid parameter" <<endl;
        return 0;
    }
    if(n==0 || n==1){
        return 1;
    }

    return n * fibonacci(n-1);
}
int main() {
    int n;
    cin >> n;
    cout << fibonacci(n) << endl;
}