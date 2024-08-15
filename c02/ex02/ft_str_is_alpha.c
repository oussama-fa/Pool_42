/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufarah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 13:24:16 by oufarah           #+#    #+#             */
/*   Updated: 2024/07/27 13:32:05 by oufarah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < 65 || str[i] > 90) && (str[i] < 97 || str[i] > 122))
			return (0);
		i++;
	}
	return (1);
}
/*
int main()
{
	printf("|%d|\n", ft_str_is_alpha("HelloWorld"));
	printf("|%d|\n", ft_str_is_alpha("Hell World!"));
	printf("|%d|\n", ft_str_is_alpha(""));
}
*/
