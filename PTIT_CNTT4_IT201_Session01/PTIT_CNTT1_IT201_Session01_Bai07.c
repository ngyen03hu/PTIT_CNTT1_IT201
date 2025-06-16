#include <stdio.h>

int cotrunglap(int arr[] , int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (arr[i] == arr[j]) {
                return 1;
            }
        }
    }
    return 0;
}

int main() {
    int arr[10] = {1, 2, 3,1, 4, 5, 6, 7, 8, 22, 4, 4, 24, 557, 65, 9,9};
    int n = sizeof(arr) / sizeof(arr[0]);

    // kiem tra
    if (cotrunglap(arr, n)) {
        printf(" Co phan tu  trung lap \n");
    }else {
        printf(" khong phan tu co trung lap \n");
    }
    return 0;
}

// so sanh tung phan tu voi cac phan tu phia sau co trung nhau khong
// do phuc tap : 0(n^2)