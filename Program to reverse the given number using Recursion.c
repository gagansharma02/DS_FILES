// Program to reverse the given number using Recursion

#include <stdio.h>

int reverse(int num, int reversedNum) {
    if (num == 0) {
        return reversedNum;
    } else {
        int lastDigit = num % 10;
        reversedNum = (reversedNum * 10) + lastDigit;
        return reverse(num / 10, reversedNum);
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int reversed = reverse(num, 0);

    printf("Reversed number: %d\n", reversed);

    return 0;
}
