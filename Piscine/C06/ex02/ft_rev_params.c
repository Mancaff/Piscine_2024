/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 17:43:54 by fmanca            #+#    #+#             */
/*   Updated: 2024/08/17 18:26:26 by fmanca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	last;

	last = argc - 1;
	while (last > 0)
	{
		i = 0;
		while (argv[last][i])
		{
			ft_putchar(argv[last][i]);
			i++;
		}
		ft_putchar('\n');
		last--;
	}
	return (0);
}

/*This function shows the arguments received on the command line
 40 One per line in reverse command line order Should show 
 41 all arguments except argv[0]*/
