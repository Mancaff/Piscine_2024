/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 17:10:44 by fmanca            #+#    #+#             */
/*   Updated: 2024/08/10 16:24:09 by fmanca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	count;

	count = 0;
	while (src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (dest);
}

/*int	main(void)
{
	char src[] = "My First C02 Project";
	char dest[50];

	ft_strcpy(dest, src);

	printf("Copied String: %s \n", dest);
	return (0);
}*/
/*ft_strcpy é responsavel por copiar a string de origem (src)
para a string de destino (dest)
while (src[count] != '\0')percorre a string origem ate 
encontar o carecter nulo */
