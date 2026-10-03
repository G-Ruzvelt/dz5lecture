#include <stdio.h>
int main () {
    int n=0, sum=0, fact=1;
    scanf("%d", &n);
    for(int i=1; i<=n; ++i) {
        sum=sum+i;
        fact=fact*i;
    }
    printf("%d %d", sum, fact);
    return 0;
}