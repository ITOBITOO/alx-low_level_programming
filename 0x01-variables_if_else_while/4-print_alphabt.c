#include <stdio.h>
#include <stdio.h>
/**
  *main - prints the alphabet in lowercase except q and e
  *
  *return 0
  */
int main(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter == 'q' || letter == 'e')
		{
			continue;
		}
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
