/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufarah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 13:45:41 by oufarah           #+#    #+#             */
/*   Updated: 2024/07/27 13:48:33 by oufarah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
			return (0);
		i++;
	}
	return (1);
}
/*
int main()
{
	printf("|%d|\n", ft_str_is_printable(" Hello_World!~"));
	printf("|%d|\n", ft_str_is_printable("Hello\tWorld\n"));
	printf("|%d|\n", ft_str_is_printable(""));
}
*/
