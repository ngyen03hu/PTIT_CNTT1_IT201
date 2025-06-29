#include <stdio.h>

int tinhTong(int arr[], int size) {
    if (size == 0)
        return 0;
    return arr[size - 1] + tinhTong(arr, size - 1);
}

int main() {
    int n;
    printf("Nhập số phần tử của mảng: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Không hợp lệ\n");
        return 0;
    }

    int arr[n];
    printf("Nhập %d phần tử của mảng:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Phần tử %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int tong = tinhTong(arr, n);
    printf("Tổng các phần tử trong mảng là: %d\n", tong);

    return 0;
}
