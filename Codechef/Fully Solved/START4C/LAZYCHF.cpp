#include <iostream>

using namespace std;

int main() {
	int T;
	cin >> T;

	while(T--) {
	    int x, m, d;
	    cin >> x >> m >> d;
        
	    if(m * x <= x + d) cout << m * x << endl;
	    else cout << x + d << endl;
	}

	return 0;
}