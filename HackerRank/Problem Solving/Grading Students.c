#include <stdio.h>

 int main(void) {
     int n;
     scanf("%d", &n);
     int grades[n];
     for(int i = 0; i < n; i++)
         scanf("%d", &grades[i]);
     int result[n];
     for(int i = 0; i < n; i++) {
        if((grades[i] + 1) % 5 == 0 && grades[i] >= 38)
            result[i] = grades[i] + 1;
        else if((grades[i] + 2) % 5 == 0 && grades[i] >= 38)
            result[i] = grades[i] + 2;
        else result[i] = grades[i];
    }
    for(int i = 0; i < n; i++)
         printf("%d\n", result[i]);
 }