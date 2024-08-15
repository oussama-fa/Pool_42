char	*ft_strrev(char *str)
{
	int	i = 0;
	int	len = 0;
	char	c;
	while (str[len])
		len++;
	len--;
	while (len > i)
	{
		c = str[len];
		str[len] = str[i];
		str[i] = c;
		i++;
		len--;
	}
	return (str);
}
