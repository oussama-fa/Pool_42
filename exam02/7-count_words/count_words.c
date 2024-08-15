#include <stdio.h>

int	count_words(char *str)
{
	int	i = 0;
	int	rst = 0;
	int	cnt = 0;
	while (str[i])
	{
		if (str[i] == 32)
			rst = 0;
		else if (rst == 0)
		{
			rst = 1;
			cnt++;
		}
		i++;
	}
	return (cnt);
}

int main()
{
	char s[] = "     Hello       world        !";
	printf("%d", count_words(s));
}
