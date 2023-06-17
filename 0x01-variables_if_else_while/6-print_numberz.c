#include <stdio.h>
#include <ctype.h>
/**
  *main - prints all single digit numbers of base 10 starting from 0, followed by a new line
  *using ft putchar function
  *return 0
  */
int main(void)
{
	int digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);
	}
	putchar('\n');
	return (0);
}
