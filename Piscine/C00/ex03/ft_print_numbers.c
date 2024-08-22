/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 16:10:42 by fmanca            #+#    #+#             */
/*   Updated: 2024/08/02 13:22:58 by fmanca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	counter;

	counter = '0';
	while (counter <= '9')
	{
		write(1, &counter, 1);
		counter++;
	}
}

/*int 	main(void)
{
	ft_print_numbers();
	return(0);
}*/
