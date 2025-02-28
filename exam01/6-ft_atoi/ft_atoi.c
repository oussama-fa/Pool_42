#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i = 0;
	int	res = 0;
	int	sig = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sig *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
		res = res * 10 + (str[i++] - 48);
	return (sig * res);
}

int main()
{
	printf("%d", ft_atoi("-124"));
}
