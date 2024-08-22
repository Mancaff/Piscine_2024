/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 20:55:37 by fmanca            #+#    #+#             */
/*   Updated: 2024/08/22 15:17:05 by fmanca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}

/*int	main()
{
	printf("Power of 2 ^ -1 = %d\n", ft_iterative_power(2, -1));
	printf("Power of 0 ^ 0 = %d\n", ft_iterative_power(0, 0));
	printf("Power of 3 ^ 1 = %d\n", ft_iterative_power(3, 1));
	printf("Power of -3 ^ 3 = %d\n", ft_iterative_power(-3, 3));
}*/
