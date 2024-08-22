/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 15:29:19 by fmanca            #+#    #+#             */
/*   Updated: 2024/08/06 18:13:06 by fmanca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_char(char c)
{
	write (1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_char((a / 10) + '0');
			ft_char((a % 10) + '0');
			write (1, " ", 1);
			ft_char((b / 10 + '0'));
			ft_char((b % 10) + '0');
			if (a != 98 || b != 99)
				write (1, ", ", 2);
			b++;
		}
		a++;
	}
}

/*int	main(void)
{
	ft_print_comb2();
	return(0);
}*/
