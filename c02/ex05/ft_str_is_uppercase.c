/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufarah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 13:41:15 by oufarah           #+#    #+#             */
/*   Updated: 2024/07/27 13:45:08 by oufarah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 65 || str[i] > 90)
			return (0);
		i++;
	}
	return (1);
}
/*
int main()
{
	printf("|%d|\n", ft_str_is_uppercase("HELLOWORLD"));
	printf("|%d|\n", ft_str_is_uppercase("helloworld"));
	printf("|%d|\n", ft_str_is_uppercase(""));
}
*/
