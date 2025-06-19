#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n ;

    do {
        printf("\n nhap so phan tu (1-100): ");
        scanf("%d", &n);
    } while ( n <= 0 || n > 100 );

    arr = (int *) malloc(n * sizeof(int));
    if(arr == NULL) {
        printf(" so phan tu khong hop le  \n");
        return 1;
    }

    printf("\n nhap phan tu  \n");
    for (int i = 0; i < n; i++) {
        printf(" arr[%d]", i);
        scanf("%d", &arr[i]);
    }


    for (int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }

    printf("\n cac phan tu sau khi dao nguoc  : ");
    for (int i = 0; i < n; i++) {
        printf("%d  ", arr[i]);
    }
    printf("\n");
    return 0;

}