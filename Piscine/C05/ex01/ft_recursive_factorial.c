/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 20:36:19 by fmanca            #+#    #+#             */
/*   Updated: 2024/08/20 20:54:58 by fmanca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	if (nb < 2)
	{
		return (1);
	}
	else
		return (nb * ft_recursive_factorial(nb - 1));
}

/*int	main(void)
{
	printf("Fatorial de -1 = %d\n", ft_recursive_factorial(-1));
	printf("Fatorial de 0 = %d\n", ft_recursive_factorial(0));
	printf("Fatorial de 1 = %d\n", ft_recursive_factorial(1));
	printf("Fatorial de 5 = %d\n", ft_recursive_factorial(5));
}*/
