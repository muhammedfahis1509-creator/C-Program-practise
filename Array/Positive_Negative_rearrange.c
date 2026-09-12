#include <stdio.h>

int main() {
    int arr[100], result[100];
    int n, i, k = 0;

    printf("Enter size: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(i = 0; i < n; i++) {
        if(arr[i] < 0)
            result[k++] = arr[i];
    }

    for(i = 0; i < n; i++) {
        if(arr[i] >= 0)
            result[k++] = arr[i];
    }

    printf("Rearranged Array:\n");

    for(i = 0; i < n; i++)
        printf("%d ", result[i]);

    return 0;
}