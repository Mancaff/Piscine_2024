/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 18:38:08 by fmanca            #+#    #+#             */
/*   Updated: 2024/08/12 16:29:45 by fmanca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	count;

	count = 0;
	while (src[count] != '\0' && n > 0)
	{
		dest[count] = src[count];
		count++;
		n--;
	}
	while (n > 0)
	{
		dest[count] = '\0';
		count++;
		n--;
	}
	return (dest);
}

/*int main(void)
{
	char src[] = "Hello world, this is Strncpy function";
	char dest[50];
	unsigned int n = 5;

	ft_strncpy(dest, src, n);

	printf("Copied String: %s \n", dest);
	return (0);
}*/
