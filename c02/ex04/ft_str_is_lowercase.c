/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufarah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 13:36:45 by oufarah           #+#    #+#             */
/*   Updated: 2024/07/27 13:40:41 by oufarah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 97 || str[i] > 122)
			return (0);
		i++;
	}
	return (1);
}
/*
int main()
{
	printf("|%d|\n", ft_str_is_lowercase("helloworld"));
	printf("|%d|\n", ft_str_is_lowercase("HelloWorld"));
	printf("|%d|\n", ft_str_is_lowercase(""));
}
*/
