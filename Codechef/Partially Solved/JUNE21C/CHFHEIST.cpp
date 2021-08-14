#include <iostream>

using namespace std;

int main() {
    std::ios::sync_with_stdio(false);
	long long int T;
	cin >> T;

	for(int i = 1; i <= T; i++) {
	    long long int D, d, P, Q, total = 0, m = 0;
	    cin >> D >> d >> P >> Q;

        for(long long int i = 1; i <= D; i++) {
            total = total + (P + m * Q);
            if(i % d == 0) m++;
        }
        cout << total << endl;
	}

	return 0;
}