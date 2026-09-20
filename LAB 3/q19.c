#include <stdio.h>

int main() {
    int n, i, posMin = 0, posMax = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

   
    int min = arr[0], max = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
            posMin = i;   
        }
        if (arr[i] > max) {
            max = arr[i];
            posMax = i;   
        }
    }

    printf("Smallest number = %d at position %d\n", min, posMin + 1);
    printf("Largest number = %d at position %d\n", max, posMax + 1);
}