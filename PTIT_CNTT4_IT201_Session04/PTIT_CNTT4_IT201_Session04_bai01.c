#include <stdio.h>
#include <stdlib.h>

int main () {
    int n  , i , value , found = 0 ;

    printf("NHap so luong phan tu cua mang : ");
    scanf("%d ",&n );

    int arr[n];

    for (int i = 0 ; i < n ; i++) {
        printf("Nhap phan tu thu %d ; ",i);
        scanf("%d",&arr[i]);

    }
    printf("Nhap phan tu can tim : ");
    scanf("%d ",&value );

    for (int i = 0 ; i < n ; i++) {
        if (arr[i] == value) {
            printf("phan tu dau tien co gia tri %d nam o vi tri %d \n",value,i);
            found = 1 ;
            break;
        }
    }

    if (!found) {
        printf("khong tim thay phan tu \n");
    }

    return 0;


}