#include<stdio.h>
int main () {
    int t;
    scanf("%d", &t);
 
    while(t--) {
        int l, r, u, d;
        scanf("%d %d %d %d", &l, &r, &u, &d);
 
        if (l == r && r == u && u == d) {
            printf("YES
");
        } else {
            printf("NO
");
        }
    }
 
    return 0;
}