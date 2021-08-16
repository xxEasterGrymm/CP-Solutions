#include <bits/stdc++.h>

using namespace std;

int main(void) {
    int T;
    cin >> T;

    for(int i = 1; i <= T; i++) {
        int n, k;
        cin >> n >> k;
        int a[n], count = 0;

        for(int j = 0; j < n; j++) {
            cin >> a[j];
            if(a[j] <= 0) count++;
        }
        if(count >= k) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    
    return 0;
}