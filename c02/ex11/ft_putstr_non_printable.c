/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufarah <oufarah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 21:14:53 by oufarah           #+#    #+#             */
/*   Updated: 2024/11/17 21:20:40 by oufarah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int		a;
	int		b;
	unsigned char	*h;

	h = "0123456789abcdef";
	while (*str)
	{
		if (*str < 32 || *str > 126)
		{
			ft_putchar('\\');
			a = (*str / 16);
			b = (*str % 16);
			ft_putchar(h[a]);
			ft_putchar(h[b]);
		}
		else
			ft_putchar(*str);
		str++;
	}
}
