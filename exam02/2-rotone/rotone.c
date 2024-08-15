#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	get(char c)
{
	if ((c >= 'A' && c < 'Z') || (c >= 'a' && c < 'z'))
		c += 1;
	else if (c == 'Z' || c == 'z')
		c -= 25;
	return (c);
}

int	main(int ac, char **av)
{
	if (ac == 2)
		while (*av[1])
			ft_putchar(get(*av[1]++));
	write(1, "\n", 1);
}
