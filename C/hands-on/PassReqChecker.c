#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/**
  * main - Check if password Entered meets requirement
  *
  * Return: Success(0)
  */
void passLength();
void _is_upper(char *ch);
void _is_lower(char *ch);
void _is_digit(char *ch);
int _is_specialC(char *ch);

int main(void)
{
    passLength();

    return (0);
}

void passLength()
{
    char *ch;
    int i;

    ch = malloc(sizeof(char) * 100);
    if (ch == NULL)
        printf("Memory not allocated\n");

    printf("Enter password: ");
    scanf("%s", ch);

    for (i = 0; ch[i] != '\0'; i++)
        ;
    if (i < 8)
    {
        printf("Minimum of 8 characters\n");
        passLength();
    }
    else
    {
        _is_upper(ch);
    }
}

void _is_upper(char *ch)
{
    if (*ch == '\0')
    {
        printf("Missing Uppercase\n");
        passLength();
    }
    if (isupper(*ch))
    {
        _is_lower(ch);
    }
    else
    {
        _is_upper(ch + 1);
    }
}

void _is_lower(char *ch)
{
    if (*ch == '\0')
    {
        printf("Missing Lowercase\n");
        passLength();
    }
    if (islower(*ch))
    {
        _is_digit(ch);
    }
    else
    {
        _is_lower(ch + 1);
    }
}

void _is_digit(char *ch)
{
    if (*ch == '\0')
    {
        printf("Missing Number\n");
        passLength();
    }
    if (isdigit(*ch))
    {
        _is_specialC(ch);
    }
    else
    {
        _is_digit(ch + 1);
    }
}

int _is_specialC(char *ch)
{
    if (*ch == '\0')
    {
        printf("Missing Special character\n");
        passLength();
    }
    if (*ch == 64)
    {
        printf("The password meets the requirements\n");
        exit(0);
    }
    else
    {
        _is_specialC(ch + 1);
    }
}
