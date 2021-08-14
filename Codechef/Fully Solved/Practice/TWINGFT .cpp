#include <bits/stdc++.h>

using namespace std;

int main() {
	long T;
	cin >> T;

	while(T--) {
	    long N, K;
	    cin >> N >> K;
	    vector<long> arr(N);
	    for(int i = 0; i < N; i++) cin >> arr[i];
	    long sum1 = 0, sum2 = 0;

	    sort(arr.begin(), arr.end());

	    while(K--) {
	        sum1 += arr.back();
	        arr.pop_back();
	        sum2 += arr.back();
	        arr.pop_back();
	    }

	    sum2 += arr.back();
	    cout << max(sum1, sum2) << endl;
	}
    
	return 0;
}