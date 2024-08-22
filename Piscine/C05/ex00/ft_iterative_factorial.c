/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 20:11:44 by fmanca            #+#    #+#             */
/*   Updated: 2024/08/20 20:38:06 by fmanca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (nb > 0)
	{
		result = result * nb;
		nb--;
	}
	return (result);
}

/*int	main(void)
{
	printf("Fatorial de -1 = %d\n", ft_iterative_factorial(-1));
	printf("Fatorial de 0 = %d\n", ft_iterative_factorial(0));
	printf("Fatorial de 1 = %d\n", ft_iterative_factorial(1));
	printf("Fatorial de 5 = %d\n", ft_iterative_factorial(5));
}*/
