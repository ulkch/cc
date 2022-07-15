#include <stdio.h>

int main_chefondate() {
    int t = 0;
    int x, y = 0;
    scanf("%d", &t);
    while (t-- > 0) {
        scanf("%d%d", &x, &y);
        x >= y ? printf("YES\n") : printf("NO\n");
    }

    return 0;
}