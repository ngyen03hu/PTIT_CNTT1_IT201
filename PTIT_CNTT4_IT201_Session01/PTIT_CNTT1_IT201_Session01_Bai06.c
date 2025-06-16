#include <stdio.h>

int main() {
    int array[] = {1,24,4,5,6,7,3,2,24,1};
    int n = sizeof(array)/sizeof(array[0]);
    int coun[100]={0};
    for (int i = 0; i < n; i++) {
        if (coun[i])continue;
        int count = 1 ;
        for (int j = 0; j < n; j++) {
            if (array[j] == array[i]) {
                count++;
                coun[j]=1;
            }
        }
        printf("gia tri %d xuat hien so lan %d\n ",array[i],count);

    }
    return 0;
}
// su dungg vong lap chay tu i = 0 den n -1;
// voi moi vong i ta chay tu i + 1 den n -  1 => so chay giam dan
// do do nên thoi gian chay se la 0(n^2)

// thuat toan 0(n)