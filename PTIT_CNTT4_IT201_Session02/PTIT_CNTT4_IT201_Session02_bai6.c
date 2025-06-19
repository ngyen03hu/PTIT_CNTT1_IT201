#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n, pos, value;

    // Nhập số phần tử hợp lệ
    do {
        printf("Nhap so phan tu (1-100): ");
        scanf("%d", &n);
    } while (n <= 0 || n > 100);

    // Cấp phát bộ nhớ ban đầu
    arr = (int *)malloc((n + 1) * sizeof(int)); // +1 để chừa chỗ thêm phần tử
    if (arr == NULL) {
        printf("Khong the cap phat bo nho!\n");
        return 1;
    }

    // Nhập các phần tử
    printf("Nhap cac phan tu:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    // Nhập vị trí muốn thêm và giá trị
    printf("Nhap vi tri phan tu muon them (0 -> %d): ", n);
    scanf("%d", &pos);
    if (pos < 0 || pos > n) {
        printf("Vi tri khong hop le!\n");
        free(arr);
        return 1;
    }

    printf("Nhap gia tri muon them: ");
    scanf("%d", &value);

    // Dịch mảng sang phải để tạo chỗ trống
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = value;
    n++;

    // In mảng sau khi thêm
    printf("Mang sau khi them:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    return 0;
}
