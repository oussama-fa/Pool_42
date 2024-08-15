#include <unistd.h>

int main()
{
	char	l = 122;
	char	U = 90;
	while (l >= 97 && U >= 65)
	{
		if (l % 2 == 0)
			write(1, &l, 1);
		else
			write(1, &U, 1);
		l--;
		U--;
	}
	write(1, "\n", 1);
}
