#include <stdio.h>
#include <stdlib.h>

int main() {
    int number;
    while (1) {
        printf("Nhhap so luong phan tu \n");
        scanf("%d ",&number);
        if (number > 0 && number < 100) break;
        printf("Dau vau con thieu \n");
    }
    int *arr = (int* )malloc( number * sizeof(int));

    for (int i = 0; i < number; i++) {
        printf("Nhap gia tri thu %d : \n", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < number; i++) {
        printf("So thu %d = %d : \n", i + 1,arr[i]);
    }

    free(arr);
    return 0;
}