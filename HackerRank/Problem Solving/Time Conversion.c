#include <stdio.h>
#include <string.h>

int main() {
    int hh, mm, ss ;
    char am[3];
    scanf("%d:%d:%d%s", &hh, &mm, &ss, am) ;
    if (strcmp(am,"PM")==0 && hh!=12) hh = hh + 12 ;
    if (strcmp(am,"AM")==0 && hh==12) hh = 0 ;
    printf("%02d:%02d:%02d", hh, mm, ss) ;
    return 0;
}