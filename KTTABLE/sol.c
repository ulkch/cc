#include <stdio.h>
#include <stdlib.h>


int main() {
    int t = 0;
    scanf("%d", &t);
    int time[10000];
    int use[10000];
    while(t--) {
        int n = 0;
        scanf("%d", &n);
        for (int i=0; i < n; i++)
            scanf("%d", &time[i]);
        for (int i=0; i < n; i++)
            scanf("%d", &use[i]);

        int res = (use[0] <= time[0]);
        for (int i = 1; i < n; i++) {
            res += (use[i] <= (time[i] - time[i-1]));
        }

        printf("%d\n", res);
    }
    return 0;
}