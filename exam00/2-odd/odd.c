#include <unistd.h>

int main()
{
	char	nb;

	nb = '0';
	while (nb <= '9')
	{
		if (nb % 2 != 0)
			write(1, &nb, 1);
		nb++;
	}
	write(1, "\n", 1);
}
