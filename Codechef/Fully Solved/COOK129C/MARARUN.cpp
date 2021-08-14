#include <iostream>

using namespace std;

int main() {
	int T;
	cin >> T;
	
	for(int  i = 1; i <= T; i++) {
	    int D,d,A,B,C;
	    cin >> D >> d >> A >> B >> C;
	    int total = D * d;

	    if(total < 10) cout << 0 << endl;
	    else if(total >= 10 && total < 21) cout << A << endl;
	    else if(total >= 21 && total < 42) cout << B << endl;
	    else cout << C << endl;
	}
    
	return 0;
}