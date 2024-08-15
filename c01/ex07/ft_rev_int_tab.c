/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufarah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 20:20:59 by oufarah           #+#    #+#             */
/*   Updated: 2024/07/26 20:24:48 by oufarah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	fi;
	int	li;
	int	tmp;

	fi = 0;
	li = size - 1;
	while (fi < li)
	{
		tmp = tab[fi];
		tab[fi] = tab[li];
		tab[li] = tmp;
		fi++;
		li--;
	}
}
