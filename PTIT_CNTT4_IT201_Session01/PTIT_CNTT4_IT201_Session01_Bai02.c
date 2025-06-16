#include <stdio.h>
void printfDouble(){
    int i = 1 ;
    while (i<=10){
    printf("%d",i);
    i *= 2;
    }
}
int main(){
    printfDouble();
    return 0;
}

// i < n (=10 ), O(n^2) giá trị của i tăng theo số nhân 2
// => độ phức tạp vòng lặp sắp sie 0(log n )