
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    do {
        printf("please input length of Array: ");
        scanf("%d", &n);
    }while (n < 1);
    int *arr = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        printf("please input array number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int index = 0;
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
            index = i;
        }
    }
    printf("max = %d o vi tri dau tien trong mang %d\n", max, index);
    return 0;
}