#include <stdio.h>

int tongTong(int a , int b) {
    if (a > b ) return 0;
    return a + tinhTong(a + 1 , b );
}

int main() {
    int firstNum , secondNum;

    printf("Nhap so nguyen duong thu nhat  : ");
    scanf("%d",&firstNum);

    printf("Nhap so nguyen duong thu hai : ");
    scanf("%d",&secondNum);

    if (firstNum > 0 && secondNum >0 && firstNum > secondNum) {
        int tong = tongTong(firstNum , secondNum);\
        printf(" tong tu %d  den %d la :  %d \n",firstNum,secondNum,tong);
    }else {
        printf("khong hop le ");
    }
    return 0;
}