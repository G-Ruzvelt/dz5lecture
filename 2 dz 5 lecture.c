#include <stdio.h>
int main () {
    for(int i=1; i<=9; ++i) {
        for(int n=1; n<=9; ++n) {
            int result=i*n;
            printf("%d*%d=%3d   ", i, n, result);
        }
        printf("\n");
    }
    return 0;
}