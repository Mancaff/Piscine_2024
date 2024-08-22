/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 14:58:15 by fmanca            #+#    #+#             */
/*   Updated: 2024/08/22 14:59:03 by fmanca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/* 
int	main(void)
{
	printf("The negative fibonacci is %d\n", ft_fibonacci(-5));
	printf("The 0º fibonacci is %d\n", ft_fibonacci(0));
	printf("The 1º fibonacci is %d\n", ft_fibonacci(1));
	printf("The 2º fibonacci is %d\n", ft_fibonacci(2));
	printf("The 3º fibonacci is %d\n", ft_fibonacci(3));
	printf("The 4º fibonacci is %d\n", ft_fibonacci(4));
	printf("The 5º fibonacci is %d\n", ft_fibonacci(5));
	printf("The 6º fibonacci is %d\n", ft_fibonacci(6));
	printf("The 7º fibonacci is %d\n", ft_fibonacci(7));
	printf("The 8º fibonacci is %d\n", ft_fibonacci(8));
	printf("The 9º fibonacci is %d\n", ft_fibonacci(9));
	printf("The 10º fibonacci is %d\n", ft_fibonacci(10));
} */
