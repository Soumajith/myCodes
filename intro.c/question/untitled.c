#include <stdio.h>
#include <string.h>
void removeChar(char *ptr, char ch)
{
    char s[100];
    int i =0;
    while (*ptr != '\0')
    {
        if (*ptr != ch)
        {
            s[i] = *ptr;
            i++;
        }
        ptr++;
    }
    s[i] ='\0';
    puts(s);
}

int main()
{
    char s[100], ch;
    printf("Enter the string: ");
    gets(s);
    printf("Enter the character to be deleted ");
    scanf("%c", &ch);
    char *ptr;
    ptr = &s[0];

    removeChar(ptr, ch);

}
