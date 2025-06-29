#include <stdio.h>

void doiSangNhiPhan(int n ) {
    if (n > 0 ) {
        doiSangNhiPhan(n / 2);
        printf("%d", n % 2);
    }
}
int main() {
    int n;
    printf("Nhap  so nguyen duong ");
    scanf("%d", &n);


    if (n == 0) {
        printf("dang nhi phan : 0\n");
    } else if (n > 0) {
        printf("dang nhi phan: ");
        doiSangNhiPhan(n);
        printf("\n");
    }else {
        printf("Vui long nhap 1 so nguyen duong  0\n");
    }
    return 0;
}