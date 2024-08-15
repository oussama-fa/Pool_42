/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufarah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 13:32:47 by oufarah           #+#    #+#             */
/*   Updated: 2024/07/27 13:35:52 by oufarah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
/*
int main()
{
	printf("|%d|\n", ft_str_is_numeric("0123456789"));
	printf("|%d|\n", ft_str_is_numeric("012 345 6789"));
	printf("|%d|\n", ft_str_is_numeric(""));
}
*/
