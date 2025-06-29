#include <stdio.h>
#include <stdlib.h>

int tinhtong(int n ) {
    if (n == 1 )
        return  1;
    return  n + tinhtong(n - 1);;
}

int main() {
    char input[100];
    int n;

    printf("Nhap vao mot chuoi (chua so nguyen duong ) : ");
    fgets(input,sizeof(input),stdin);

    n = atoi(input);


    if (n > 0) {
        int tong = tinhtong(n);
        printf("tong tu 1 den %d la %d \n",n,tong);

    }else {
        printf("khong hop le ");
    }
    return 0;
}