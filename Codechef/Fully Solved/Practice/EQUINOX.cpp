#include <iostream>

using namespace std;

int main() {
	int T;
	cin >> T;
    for(int i = 1; i <= T; i++) {
	    long int N, A, B, pointsA = 0, pointsB = 0;
	    cin >> N >> A >> B;
	    string str;
	    for(int j = 1; j <= N; j++) {
	        cin >> str;
	        int flag = 0;
	        for(int k = 0; k < 7; k++) {
	            if("EQUINOX"[k] == str[0]) {
	                pointsA += A;
	                flag = 1;
	            }   
	        }
	        if(flag == 0) pointsB += B;
	        else flag = 0;
	    }
	    if(pointsA > pointsB) cout << "SARTHAK" << endl;
	    else if(pointsB > pointsA) cout << "ANURADHA" << endl;
	    else cout << "DRAW" << endl;
	}

	return 0;
}