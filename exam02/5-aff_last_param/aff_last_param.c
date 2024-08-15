#include <unistd.h>

int main(int ac, char **av)
{
	if (ac >= 2)
		while (*av[ac - 1])
			write(1, av[ac - 1]++, 1);
	write(1, "\n", 1);
}
