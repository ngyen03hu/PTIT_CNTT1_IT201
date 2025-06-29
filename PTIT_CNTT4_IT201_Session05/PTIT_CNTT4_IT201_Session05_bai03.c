#include <stdio.h>
#include <stdlib.h>

int tinhtong(int n) {
    if (n==1 ) {
        return 1;

    }else {
        return n + tinhtong(n-1);

    }
}
int main (){
        char chuoi[100];
        int n ;

        printf("Nhap vao mot chuoi (so nguyen duong) : ");
        fgets(chuoi,sizeof(chuoi),stdin);

        n = atoi(chuoi);

        if (n > 0) {
            int ketqua = tinhtong(n);
            printf("tong tu 1 den %d la %d \n",n,ketqua);
        }else {
            printf("khong hop le ");
        }
        return 0;
    }
