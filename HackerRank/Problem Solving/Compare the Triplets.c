#include <stdio.h>

int main(void) {
    int a[3], b[3];
    int counta = 0, countb = 0;
    for(int i = 0; i < 3; i++) scanf("%d", &a[i]);
    for(int i = 0; i < 3; i++) scanf("%d", &b[i]);
    for(int i = 0; i < 3; i++) {
        if(a[i] > b[i]) counta++;
        else if(a[i] < b[i]) countb++;
    }
    printf("%d %d", counta, countb);
    return 0;
}