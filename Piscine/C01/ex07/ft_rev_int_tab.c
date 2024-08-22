/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 14:41:11 by fmanca            #+#    #+#             */
/*   Updated: 2024/08/08 16:42:16 by fmanca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	swap;

	i = 0;
	temp = size - 1;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab[i] = tab[temp];
		tab[temp] = swap;
		i++;
		temp--;
	}
}
/*int	main(void)
{
	int	tab[10] = {9, 21, 56, 4, 99, 44, 78, 18, 22, 8};
	int	size = 10;

	ft_rev_int_tab(tab, size);
	
	printf("%d, %d, %d, %d, %d, %d, %d, %d, %d, %d \n", tab[0], tab[1], tab[2], 
	tab[3], tab[4], tab[5], tab[6], tab[7], tab[8], tab[9]);
	return(0);
}*/
