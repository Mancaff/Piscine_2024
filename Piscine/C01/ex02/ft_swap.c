/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 15:29:50 by fmanca            #+#    #+#             */
/*   Updated: 2024/08/16 13:23:47 by fmanca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	x;

	x = *a;
	*a = *b;
	*b = x;
}

int	main(void)

{
	int	num1 = 154;
	int	num2 = 397;

	printf("before swapping: num1 is %d, num2 is %d\n", num1, num2);

	ft_swap(&num1,&num2);

	printf("After swapping: num1 is %d, num2 is %d\n", num1, num2);
}
