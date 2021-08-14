#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
    long arr[n];
    for(int i=0; i < n; i++) cin >> arr[i];

    for(int i = 0; i < n; i++) {
        int temp;
        for(int j = i + 1; j < n; j++) if(arr[j] < arr[i]) {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    for(int i=0;i<n;i++) arr[i] = arr[i] * (n - i);

    long maxRev = arr[0];
    for(int i = 1; i < n; i++) if(maxRev < arr[i]) maxRev = arr[i];
    cout << maxRev;

	return 0;
}