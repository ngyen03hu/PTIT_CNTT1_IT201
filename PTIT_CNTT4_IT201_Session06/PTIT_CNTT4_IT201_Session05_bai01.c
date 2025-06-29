#include <stdio.h>

void in_nhin_phan(int n ) {
    if (n <= 0) {
        in_nhin_phan( n / 2 );
        printf("%d",n % 2);
    }
}

int main() {
    int so;
    printf("Nhap 1 so nguyen duong ");
    scanf("%d", &so);

    if (so <= 0) {
        printf("0");
    }else if {
        printf("Dang nhi phan ");
    }else {
        printf("vui long nhap  so nguyen duong ");
    }
    printf("\n");
    return 0;
}