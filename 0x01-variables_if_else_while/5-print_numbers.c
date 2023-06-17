#include <stdio.h>
#include <ctype.h>
/**
  *main - Print numbers
  *
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
