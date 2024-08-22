/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 14:52:17 by fmanca            #+#    #+#             */
/*   Updated: 2024/08/13 15:50:49 by fmanca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char	s1[] = "hello world";
	char	s2[] = "hello world";

	

	printf("%d\n", ft_strcmp(s1, s2));
	return (0);
}*/

/*if lexically s1 is equal to s2 return 0
if lexically s1 is larger to s2 return positive
if lexically s1 is smaller to s2 return negative*/
