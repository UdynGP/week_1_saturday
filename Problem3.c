/*
You are given a string S containing both uppercase and lowercase letters.
Note:- You need to find out the number of vowels in the given string.
For example :-
Input: Hackingly
Output: 2
*/

#include <stdio.h>

void count_vowels_and_consonant(char *str)
{
    int vowels = 0;
    int i;
    char ch;

    for (i = 0; str[i] != '\0'; i++)
    {
        ch = str[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            vowels++;
        else if (ch == ' ')
            continue;
    }

    printf("\nNumber of Vowels: %d", vowels);
}

int main()
{
    char *str = "Hackingly";
    printf("String: %s", str);
    count_vowels_and_consonant(str);
    return 0;
}
