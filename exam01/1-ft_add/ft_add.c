#include <stdio.h>

void	ft_add(int *ptr, int number)
{
	*ptr += number;
}

int main()
{
	int	nb = 20;
	int nb2 = 10;
	ft_add(&nb, nb2);
	printf("%d", nb);
}
