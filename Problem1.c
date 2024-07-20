/*
Problem Statement - Write a program which take a number N as input from the user and You need to reverse the number.
For example -:
Input: Num=1998
Output: Num=8991
*/

#include <stdio.h>

int main()
{
    int num, reversed = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    while (num != 0)
    {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    printf("Reversed number: %d\n", reversed);
    return 0;
}
