#include <iostream>

using namespace std;

int main() {
	std::ios_base::sync_with_stdio;
	int T;
	cin >> T;

	while(T--) {
	    int N, count = 0, i;
	    cin >> N;
	    int A[N];
	    for(i = 1; i <= N; i++) cin >> A[i];

	    for(i = 1; i <= N; i++) {
	        if(A[i] >= 1 && A[i] <=7) count++;
	        if(count == 7) break;
	    }
	    cout << i << endl;
	}

	return 0;
}