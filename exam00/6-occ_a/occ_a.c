int	occ_a(char *str)
{
	int	i;
	int	cnt;

	i = 0;
	cnt = 0;
	while (str[i])
	{
		if (str[i] == 'A')
			cnt += 1;
		i++;
	}
	return (cnt);
}
