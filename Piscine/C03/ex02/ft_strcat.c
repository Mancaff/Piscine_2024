/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 22:08:47 by fmanca            #+#    #+#             */
/*   Updated: 2024/08/13 00:01:22 by fmanca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	dest[10] = "dest";
	char	src[10] = "src";

	ft_strcat(dest, src);

	printf("String: %s\n", dest);
	return (0);
}*/

/*this function traverses the destination string 
until it finds the null then copies and add  the source string to the string 
of destination */

/*while (src[j] != '\0') - copy the source string 
to the destination string*/
