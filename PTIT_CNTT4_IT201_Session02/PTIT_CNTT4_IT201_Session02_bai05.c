#include <stdio.h>
#include <stdlib.h>

int main(){
    int *arr;
    int  n , pos;

    printf("Nhap so phan tu (0<n=100): ");
    scanf("%d",&n);


    if ( n <= 0 || n > 100){
    printf("So phan tu k hop le  n\n");
    return 1;
    }

    arr = (int *)malloc(n*sizeof(int));
    if (arr == NULL){
       printf("khong the cap nhan bo nho !\n");
       return 1;
    }

    printf("Nhap nhap cac phan tu: \n ");
    for(int i = 0; i < n; i++){
    printf("arr[%d] ", i);
    scanf("%d",&arr[i]);
    }

    printf("nhap vi tri muon xoa: ");
    scanf("%d",&pos);

    if ( pos < 0  || pos >= n   ){
    printf("k hop le  n\n");
    }else{
        for(int i = pos ; i < n - 1 ; i++){
            arr[i] = arr[i + 1];
        }
        n--;
        printf("mang sau khi xoa: \n");
        for(int i = 0 ; i< n ; i++){
            printf("%d  ",arr[i]);
        }
        printf("\n");
        return 0;
    }

}
