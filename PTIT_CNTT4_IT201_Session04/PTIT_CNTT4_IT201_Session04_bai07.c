//
// Created by Hikari on 25/06/202
#include <stdio.h>

int main() {
    int n;
    printf ("Please enter length of array: ");
    scanf ("%d", &n);
    if ( n <= 0) {
        printf ("Invalid input\n");
        return 0;
    }
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf ("%d", &arr[i]);
    }
    int found = -1;
    for (int i = 0; i < n/2; i++) {
        if (arr[i] == arr[n - i - 1]) {
            printf("cap doi xung %d %d\n",arr[i],arr[n - i - 1]);
            found = 1;
        }
    }
    if (found = -1) {
        printf ("No such number\n");
    }
    return 0;
}