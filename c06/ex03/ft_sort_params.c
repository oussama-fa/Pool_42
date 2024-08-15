/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufarah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 21:30:56 by oufarah           #+#    #+#             */
/*   Updated: 2024/08/05 00:30:06 by oufarah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_swap(char **a, char **b)
{
	char	*c;

	c = *a;
	*a = *b;
	*b = c;
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	if (ac >= 2)
	{
		while (av[i])
		{
			j = i + 1;
			while (av[j])
			{
				if (ft_strcmp(av[i], av[j]) > 0)
					ft_swap(&av[i], &av[j]);
				j++;
			}
			i++;
		}
		i = 0;
		while (av[++i])
		{
			ft_putstr(av[i]);
			write(1, "\n", 1);
		}
	}
}
