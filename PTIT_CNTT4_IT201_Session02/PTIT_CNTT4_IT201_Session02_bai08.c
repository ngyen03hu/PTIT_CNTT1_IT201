#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *arr;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Khong the cap phat bo nho!\n");
        return 1;
    }

    printf("Nhap cac phan tu:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Cac phan tu lon hon cac phan tu dung sau no:\n");

    for (int i = 0; i < n; i++) {
        int isGreater = 1;

        for (int j = i + 1; j < n; j++) {
            if (arr[i] <= arr[j]) {
                isGreater = 0;
                break;
            }
        }

        if (isGreater) {
            printf("%d ", arr[i]);
        }
    }

    printf("\n");

    free(arr);

    return 0;
}
