#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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
		printf("Password is less than 8 characters\n");
		passLength();
	}
	else
	{
		printf("length\n");
		_is_upper(ch);
	}
}

void _is_upper(char *ch)
{
	if (*ch == '\0')
	{
		printf("Missing Uppercase / Lowercase / Special character\n");
		passLength();
	}
	if (*ch > 64 && *ch < 91)
	{
		printf("uppe\n");
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
		printf("Missing Uppercase / Lowercase / Special character\n");
		passLength();
	}
	if (*ch > 96 && *ch < 123)
	{
		printf("lower\n");
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
		printf("Missing Number / Uppercase / Lowercase / Special character\n");
		passLength();
	}
	if (*ch > 47 && *ch < 58)
	{
		printf("digit\n");
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
		printf("Missing Number / Uppercase / Lowercase / Special character\n");
		passLength();
	}
	if (!((*ch >= 48 && *ch <= 57) || (*ch >= 65 && *ch <= 90) || (*ch >= 97 && *ch <= 122) || (*ch >= 33 && *ch <= 47) || (*ch >= 58 && *ch <= 64) || (*ch >= 91 && *ch <= 96) || (*ch >= 123 && *ch <= 126)))
	{
		printf("The password meets the requirements\n");
		exit(0);
	}
	else
	{
		_is_specialC(ch + 1);
	}
}
