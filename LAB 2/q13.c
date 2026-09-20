#include <stdio.h>

int main() {
    int n, i, j, sum = 0, temp;

    printf("Enter n: ");
    scanf("%d", &n);

    sum = n*(n+1)/2;

    printf("Sum = %d\n", sum);
    return 0;
}
