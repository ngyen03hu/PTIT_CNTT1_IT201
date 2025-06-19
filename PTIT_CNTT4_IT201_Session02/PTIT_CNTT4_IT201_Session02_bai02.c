#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>

int main () {
    int *arr;
    int n , number,count = 0 ;

    do {
        printf("nhap so luong phan tu (1 - 100): ");
        scanf("%d", &n);
    } while ( n <= 0 || n > 100 );

    arr = (int *) malloc(n * sizeof(int));
    if(arr == NULL) {
        printf("nhap phan tu khong hop le\n");
        return 1;
    }

    printf("nhap so phan tu cua mang  :\n");
    for(int i = 0; i < n; i++){
        printf("arr[%d]:", i);
        scanf("%d",&arr[i]);
        }
    printf("nhap so can dem : ");
    scanf("%d", &number);

    for(int i = 0; i < n; i++) {
        if(arr[i] == number) {
            count++;
        }
    }
    printf("so phan tu khong hop le  : %d\n", count);

    free(arr);

    return 0;

}