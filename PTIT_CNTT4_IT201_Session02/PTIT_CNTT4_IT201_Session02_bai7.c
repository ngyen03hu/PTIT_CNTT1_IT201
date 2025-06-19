#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, target;
    int *arr;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Khong the cap phat bo nho!\n");
        return 1;
    }

    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i);
        scanf("%d", &arr[i]);
    }

    // Nhập số cần tìm tổng
    printf("Nhap tong can tim: ");
    scanf("%d", &target);

    int found = 0;
    for (int i = 0; i < n - 1 && !found; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                printf("Tim thay: %d, %d\n", arr[i], arr[j]);
                found = 1;
                break;
            }
        }
    }

    if (!found) {
        printf("Khong tim thay\n");
    }

    free(arr);

    return 0;
}
