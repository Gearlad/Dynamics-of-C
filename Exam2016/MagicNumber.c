#include <stdio.h>
 
int main(void) {
 
    int M;
    scanf("%d", &M);
    int N = (M > 0 && M % 2 == 0) && (M > 10000 || M < 1000);
    printf("%d", N);
 
    return 0;
}
