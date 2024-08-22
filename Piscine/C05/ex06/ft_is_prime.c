/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 15:01:33 by fmanca            #+#    #+#             */
/*   Updated: 2024/08/22 15:02:33 by fmanca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// prime numbers are numbers that are only divisible by themselves
int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	i = 2;
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/* 
int	main(void)
{
	printf("-7 is prime? %d\n", ft_is_prime(-7));
	printf("0 is prime? %d\n", ft_is_prime(0));
	printf("2 is prime? %d\n", ft_is_prime(2));
	printf("3 is prime? %d\n", ft_is_prime(3));
	printf("5 is prime? %d\n", ft_is_prime(5));
	printf("6 is prime? %d\n", ft_is_prime(6));
	printf("23 is prime? %d\n", ft_is_prime(23));
} */
