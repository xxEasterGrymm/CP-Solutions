#include <stdio.h>

int main() {
    int s, t, a, b, apples_count, oranges_count, countApples = 0, countOranges = 0;;
    scanf("%d%d%d%d%d%d", &s, &t, &a, &b, &apples_count, &oranges_count);
    int apples[apples_count], oranges[oranges_count];
    for(int  i = 0; i < apples_count; i++) scanf("%d", &apples[i]);
    for(int  i = 0; i < oranges_count; i++) scanf("%d", &oranges[i]);
    for(int i = 0; i < apples_count; i++)
        if((a + apples[i]) >= s && (a + apples[i]) <= t) countApples++;
    for(int i = 0; i < oranges_count; i++)
        if((b + oranges[i]) >= s && (b + oranges[i]) <= t) countOranges++;
    printf("%d\n%d", countApples, countOranges);
    return 0;
}