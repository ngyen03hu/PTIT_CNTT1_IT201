#include <stdio.h>
#include <string.h>
#include <ctype.h>

int laKyTuHopLe(char c) {
    return isalnum(c);
}

int laPalindrome(char str[], int left, int right) {
    while (left < right && !laKyTuHopLe(str[left])) left++;
    while (left < right && !laKyTuHopLe(str[right])) right--;

    if (left >= right)
        return 1;

    if (tolower(str[left]) != tolower(str[right]))
        return 0;

    return laPalindrome(str, left + 1, right - 1);
}

int main() {
    char chuoi[1000];

    printf("Nhập một chuỗi bất kỳ: ");
    fgets(chuoi, sizeof(chuoi), stdin);

    int len = strlen(chuoi);
    if (chuoi[len - 1] == '\n') chuoi[len - 1] = '\0';

    if (laPalindrome(chuoi, 0, strlen(chuoi) - 1))
        printf("Palindrome valid\n");
    else
        printf("Palindrome invalid\n");

    return 0;
}
