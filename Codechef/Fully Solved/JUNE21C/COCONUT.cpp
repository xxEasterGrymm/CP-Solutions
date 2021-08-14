#include <iostream>

using namespace std;

int main() {
	int T;
	cin >> T;
	
    while(T--) {
	    int xa, xb, Xa, Xb;
	    cin >> xa >> xb >> Xa >> Xb;
	    
        cout << (int)(Xa / xa + Xb / xb) << endl;
	}

	return 0;
}