#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n][n];
    for(int i = 0; i < n; i++) for(int j = 0; j < n; j++) cin >> arr[i][j];
    int diag1 = 0, diag2 = 0;
    
    for(int i = 0; i < n; i++) {
        diag1 = diag1 + arr[i][i];
        diag2 = diag2 + arr[i][n - 1 - i];
    }
    cout << abs(diag1 - diag2);

    return 0;
}