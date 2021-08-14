#include <iostream>

using namespace std;

int main() {
    int T;
	cin >> T;
	int Amin, Bmin, Cmin, Tmin, A, B, C;

	for(int i = 0; i < T; i++) {
	    cin >> Amin >> Bmin >> Cmin >> Tmin >> A >> B >> C;
	    
        if(A >= Amin && B >= Bmin && C >= Cmin && (A + B + C) >= Tmin) cout << "YES\n";
	    else cout << "NO\n";
	}

	return 0;
}