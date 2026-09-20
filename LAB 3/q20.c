#include <stdio.h>

int main() {
    int n, i, j, flag = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                flag = 1; 
                break;
            }
        }
        if (flag) break;
    }

    if (flag)
        printf("Array contains duplicate numbers.\n");
    else
        printf("Array does not contain duplicate numbers.\n");

    return 0;
}
