#include <bits/stdc++.h>

using namespace std;

int main() {
    int x1, v1, x2, v2, kang1, kang2, vel1, vel2, flag = 0;
    cin >> x1 >> v1 >> x2 >> v2;
    
    if(x1 < x2) {
        kang1 = x1;
        vel1 = v1;
        kang2 = x2;
        vel2 = v2;
    }
    else {
        kang1 = x2;
        vel1 = v2;
        kang2 = x1;
        vel2 = v1;
    }
    while(kang1 <= kang2) {
        if(kang1 == kang2) {
            cout << "YES";
            flag = 1;
            break;
        }
        kang1 = kang1 + vel1;
        kang2 = kang2 + vel2;
    }
    if(!flag) cout << "NO";

    return 0;
}