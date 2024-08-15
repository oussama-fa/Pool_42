/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufarah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 12:34:41 by oufarah           #+#    #+#             */
/*   Updated: 2024/08/06 16:37:16 by oufarah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*r;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	r = malloc (sizeof(int) * (max - min));
	if (!r)
		return (-1);
	i = 0;
	while (max > min)
	{
		r[i] = min;
		i++;
		min++;
	}
	*range = r;
	return (i);
}
/*
int main()
{
	int	i = 0;
	int min = 0;
	int max = 5;
	int	*res;
	int size = ft_ultimate_range(&res, min, max);
	if (size > 0)
	{
		while (i < size)
			printf("{%d}", res[i++]);
	}
}
*/
