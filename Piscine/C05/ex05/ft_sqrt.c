/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 14:59:53 by fmanca            #+#    #+#             */
/*   Updated: 2024/08/22 15:00:32 by fmanca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_sqrt(int nb)
{
	long	i;

	i = 0;
	if (nb <= 0)
		return (0);
	while (i * i < nb)
		i++;
	if (i * i == nb)
		return (i);
	else
		return (0);
}
/* 
int	main(void)
{
	printf("Square Root of 0: %d\n", ft_sqrt(0));
	printf("Square Root of -2: %d\n", ft_sqrt(-2));
	printf("Square Root of 4: %d\n", ft_sqrt(4));
	printf("Square Root of 10: %d\n", ft_sqrt(10));
	printf("Square Root of 25: %d\n", ft_sqrt(25));
} */
