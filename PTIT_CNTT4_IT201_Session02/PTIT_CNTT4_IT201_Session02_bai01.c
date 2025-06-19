#include <stdio.h>
#include <stdlib.h>

int main() {
    int n ;
    int *arr;

    printf("nhap so phan tu (0  < n <= 100): ");
    scanf("%d", &n);

    if(n <= 0 || n > 100) {
         printf(" so phan tu khong hop le  \n");
        return 1;
    }
    arr = (int *) malloc(n * sizeof(int));
    if(arr == NULL) {
        printf("khong hop le\n");
        return 1;
    }

    printf("nhap cac so nguyen \n");
    for(int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    for(int i = 0; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];

        }

    }
    printf("gia tri lon nhst trong mnag la : %d  \n",max);
    return 0;
}