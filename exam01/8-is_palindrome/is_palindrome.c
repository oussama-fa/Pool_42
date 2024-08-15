#include <unistd.h>

int main(int ac, char **av)
{
	int	i = 0;
	int	len = 0;

	if (ac == 2)
	{
		while (av[1][len])
			len++;
		len--;
		while (av[1][i])
		{
			if (av[1][i] == av[1][len])
				write(1, &av[1][i], 1);
			else
				break;
			i++;
			len--;
		}
	}
	write(1, "\n", 1);
}
