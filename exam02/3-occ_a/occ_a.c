#include <stdio.h>

int	occ_a(char *str)
{
	int	i = 0;
	int	cnt = 0;
	while (str[i])
	{
		if (str[i] == 'A')
			cnt++;
		i++;
	}
	return (cnt);
}

int main()
{
	char	s[] = "zzAaA";
	printf("%d", occ_a(s));

}
