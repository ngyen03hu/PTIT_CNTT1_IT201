#include <stdio.h>

void sortbb(int arr[],int length) {
    for (int i = 0; i < length; i++) {
        for (int j = i + 1; j < length; j++) {
            if (arr[i] > arr[j+1]) {
                int temp = arr[i];
                arr[i] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main() {
    int arr[] = { 2, 5, 4,2, 6, 23, 8, 9, 10};
    int length = sizeof(arr) / sizeof(arr[0]);
    sortbb(arr, length);
    printf("mang sau khi sap xep \n");
    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

// sử dungj thuật toán so sánh nổi bọt
// của sắp xếp là 0(n^2)