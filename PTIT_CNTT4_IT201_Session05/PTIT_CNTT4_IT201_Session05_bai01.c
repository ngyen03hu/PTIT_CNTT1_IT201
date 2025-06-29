#include <stdio.h>

void printNumber(int n ) {
    if (n == 0 )return;
    printNumber(n-1);
    printf("%d \n",n);
}
int main() {
    int n ;
    printf("Nhap 1 so nguyen duong :");
    scanf("%d ",&n );
    if (n > 1) {
        printNumber(n);
    }else {
        printf("vui long nhap 1 so nguyen duong hop le .\n");
        return 0;
    }
}
