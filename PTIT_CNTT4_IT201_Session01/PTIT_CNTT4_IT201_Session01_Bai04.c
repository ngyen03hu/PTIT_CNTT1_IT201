#include <stdio.h>

int sumWithloopA(int n ) {
    int sum = 0 ;
    for (int i = 1; i <= n; i++) {
        sum = sum + i;

    }
    return sum;
    // độ phức tạp thời gian : O(n)
    // độ phức tạp không gian : 0(1)
}
int sumWithoutloopB(int n ) {
    if (n<1 )return 0;
    int sum = n*(n+1)/2;
    return sum;
    // độ phức tạp thời gian : O(1)
    // độ phức tạp không gian : 0(1)
}
int main() {
    int n = 10 ;
    int s1, s2;

    s1 = sumWithloopA(n);
    s2 = sumWithoutloopB(n);

    printf("tổng bằng vòng lặp (s1) = %d\n ",s1);
    printf("tổng bằng vòng lặp (s1) = %d\n ",s2);

    return 0;
}
