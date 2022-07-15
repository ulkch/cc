#include <stdio.h>


int main_auction() {
    int t, a, b, c = 0;
    scanf("%d", &t);
    while(t--) {
        scanf("%d%d%d", &a, &b, &c);
        a > b ?
        (a > c ? printf("Alice\n") : printf("Charlie\n")) :
        (b > c ? printf("Bob\n") : printf("Charlie\n"));
    }
    return 0;
}