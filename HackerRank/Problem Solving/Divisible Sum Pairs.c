#include <stdio.h>

int main(void) {
    int n, k;
    scanf("%d %d", &n, &k);
    int ar[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &ar[i]);
    }
    int count = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if((ar[i] + ar[j]) % k == 0) count++;
        }
    }
    printf("%d", count);
    return 0;
}