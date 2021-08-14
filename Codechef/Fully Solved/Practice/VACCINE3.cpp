#include <iostream>

using namespace std;

int main() {
	int T;
	cin >> T;

	while(T--) {
	    long long int G, P, X[10], before = 0;
	    cin >> G >> P;
	    for(int i = 0; i < 10; i++) cin >> X[i];
        
	    for(int i = G; i < 10; i++) before += X[i];
	    auto days = [&](long long int people) {
	        return (people / P + (people % P != 0));
	    };
	    long long int min = days(before + 1);
	    long long int max = days(before + X[G - 1]);
	    cout << min << ' ' << max << endl;
    }

    return 0;
}