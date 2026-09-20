#include <stdio.h>

int main() {
    int m, n, sum = 0;

    printf("Enter starting number m : ");
    scanf("%d", &m);

    printf("Enter ending number n : ");
    scanf("%d", &n);

    
    for (int i = m; i <= n; i++) {
        sum += i;
    }

    printf("Sum of numbers from %d to %d = %d\n", m, n, sum);

}
