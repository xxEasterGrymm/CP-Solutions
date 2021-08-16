#include <bits/stdc++.h>

using namespace std;

int main() {
    long long int arr[5];
    long long int sumMax = 0, sumMin = 0, sum = 0;

    for(long long int i = 0; i < 5; i++) {
        cin >> arr[i];
        sumMin = sumMin + arr[i];
    }
    for(long long int i = 0; i < 5; i++) {
        for(long long int j = 0; j < 5; j++) {
            if(i != j) sum = sum + arr[j];
        }
        if(sum > sumMax) sumMax = sum;
        else if(sum < sumMin) sumMin = sum;
        sum = 0;
    }
    cout << sumMin << " " << sumMax;

    return 0;
}