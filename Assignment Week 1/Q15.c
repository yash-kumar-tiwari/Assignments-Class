// check whether entered character is vowel or not

#include <stdio.h>
int main()
{
    char ch;
    printf("Enter Character: ");
    scanf("%c", &ch);

    if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        printf("%c Character is Vowel.", ch);
    }
    else
    {
        printf("%c Character is Consonant.", ch);
    }
}
