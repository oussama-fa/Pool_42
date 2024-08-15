#include <stdlib.h>
#include <stdio.h>

int	lenght(long nb)
{
	int	i = 0;
	if (nb < 0)
		nb *= -1;
	while (nb > 0)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int	nbr)
{
	long num = nbr;
	int	len = lenght(num);
	char	*str;
	if (nbr == 0)
	{
		str = malloc (2);
		str = "0";
		return (str);
	}
	else if (num < 0)
	{
		str = malloc (len + 2);
		num *= -1;
		str[0] = '-';
		str[len + 1] = '\0';
	}
	else if (num > 0)
	{
		str = malloc (len + 1);
		str[len + 1] = '\0';
		len--;
	}
	while (num > 0)
	{
		str[len] = num % 10 + 48;
		num /= 10;
		len--;
	}
	return (str);
}

int main()
{
	printf("%s", ft_itoa(-2147483648));
}
