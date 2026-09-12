#include <stdio.h>

int main() {
    int arr[100], temp[100];
    int n, r, i;
    char dir;

    printf("Enter size: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter rotation count: ");
    scanf("%d", &r);

    printf("Enter direction (L/R): ");
    scanf(" %c", &dir);

    r = r % n;

    if(dir == 'L' || dir == 'l') {
        for(i = 0; i < n; i++)
            temp[i] = arr[(i + r) % n];
    }
    else {
        for(i = 0; i < n; i++)
            temp[(i + r) % n] = arr[i];
    }

    printf("Rotated Array:\n");

    for(i = 0; i < n; i++)
        printf("%d ", temp[i]);

    return 0;
}