/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufarah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 14:43:04 by oufarah           #+#    #+#             */
/*   Updated: 2024/08/07 15:34:30 by oufarah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	get_len(int size, char **str, char *s)
{
	int	i;
	int	cnt;

	i = 0;
	cnt = 0;
	while (i < size)
		cnt += ft_strlen(str[i++]);
	cnt += ft_strlen(s) * (size - 1);
	return (cnt);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*s;
	int		i;
	int		rst;
	int		c;
	
	s = malloc (get_len(size, strs, sep) + 1);
	if (!s)
		return (NULL);
	i = 0;
	c = 0;
	while (i < size)
	{
		rst = 0;
		while (strs[i][rst])
			s[c++] = strs[i][rst++];
		rst = 0;
		while (sep[rst] && i != size - 1)
			s[c++] = sep[rst++];
		i++;
	}
	s[c] = '\0';
	return (s);
}
/*
int	main()
{
	char	*tab[2];
	tab[0] = "Hello";
	tab[1] = "World";
	char *s = ft_strjoin(2, tab, "<>");
	printf("%s\n", s); 
	free(s);
}
*/
