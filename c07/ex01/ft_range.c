/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufarah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 12:20:11 by oufarah           #+#    #+#             */
/*   Updated: 2024/08/06 16:27:24 by oufarah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*r;

	if (min >= max)
		return (0);
	r = malloc(sizeof(int) * (max - min));
	if (!r)
		return (NULL);
	i = 0;
	while (max > min)
	{
		r[i] = min;
		min++;
		i++;
	}
	return (r);
}
/*
int main(void)
{
	int	min = 0;
	int	max = 10;
	int	size = max - min;
	int	*tab = ft_range(min, max);
	int	i = 0;
	while (i < size)
		printf("{%d}", tab[i++]);
	free(tab);
}
*/
