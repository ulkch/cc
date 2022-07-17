#include "stdio.h"


int main(){
    int t, a, b = 0;
    scanf("%d", &t);
    while(t--) {
        scanf("%d%d", &a, &b);
        (a < b) ? printf("FIRST\n") :
        (b == a) ? printf("ANY\n") : printf("SECOND\n");
    }
    return 0;
}