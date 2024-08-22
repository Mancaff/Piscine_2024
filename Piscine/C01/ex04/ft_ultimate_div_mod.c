/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 16:35:08 by fmanca            #+#    #+#             */
/*   Updated: 2024/08/07 17:41:59 by fmanca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}

/*int	main(void)
{
	int	a = 16;
	int	b = 5;
	ft_ultimate_div_mod(&a, &b);
	printf("%d\n%d\n", a, b);
	return(0);
}*/
/*temp armazena o valor inicial de a(16)
 *a atualiza o valor de a com  o resultado
 de (*a / *b) *b atualiza o valor de b com
o resto da divisao do valor original de *a com *b */
