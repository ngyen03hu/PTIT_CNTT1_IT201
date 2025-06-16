#include <stdio.h>

#define MAX  1000

int main () {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 22, 4, 4, 24, 557, 65, 9,9};
    int n = sizeof(arr) / sizeof(arr[0]);

    int dem[MAX] = {0};

    for (int i = 0; i < n; i++) {
        dem[arr[i]]++;
    }
    int max = 0;
    int gitri = 0 ;
    for (int i = 0; i < MAX ; i++) {
        if (dem[i] > max) {
            max = dem[i];
            gitri = i;
        }
    }
    printf("phan tu xuat hien nhieu nhat la phan : %d (xuat hien %d lan )\n", gitri,max);
    return 0;
}

//DUYET QUA mang de dem so lan xuat hien cua rung so

// luu kqua vo mang dem
//sau so xuat hien lon nhat

// do phuc tap thoi gian 0(n)
// do  phuc tap khong gian : 0(k)
