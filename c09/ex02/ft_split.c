/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufarah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 23:31:24 by oufarah           #+#    #+#             */
/*   Updated: 2024/08/15 00:03:27 by oufarah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_check(char c, char *sep)
{
	int	i;

	i = 0;
	while (sep[i])
	{
		if (sep[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_count_word(char *str, char *sep)
{
	int	i;
	int	cnt;

	i = 0;
	cnt = 0;
	while (str[i])
	{
		while (str[i] && ft_check(str[i], sep))
			i++;
		if (str[i])
			cnt++;
		while (str[i] && !ft_check(str[i], sep))
			i++;
	}
	return (cnt);
}

char	*ft_string_cpy(char *str, char *sep, int *j)
{
	char	*new;
	int		i;

	new = malloc(1024);
	i = 0;
	while (str[*j])
	{
		if (ft_check(str[*j], sep))
			break ;
		new[i] = str[*j];
		i++;
		*j = *j + 1;
	}
	new[i] = '\0';
	return (new);
}

char	**ft_split(char *str, char *charset)
{
	int		word;
	int		i;
	char	**words;
	int		j;

	word = ft_count_word(str, charset);
	i = 0;
	words = malloc(sizeof(char *) * (word + 1));
	words[word] = NULL;
	j = 0;
	while (i < word)
	{
		while (str[j] && ft_check(str[j], charset))
			j++;
		words[i] = ft_string_cpy(str, charset, &j);
		i++;
	}
	return (words);
}
