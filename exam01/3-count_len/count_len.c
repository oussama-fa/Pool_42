#include <stdio.h>

int	count_len(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int main()
{
	printf("%d", count_len("Hello World!\n"));
}
