/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 18:47:24 by fmanca            #+#    #+#             */
/*   Updated: 2024/08/10 19:09:35 by fmanca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 65 && str[i] <= 90))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int	main(void)
{
	int	result;
	char	str1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	result = ft_str_is_uppercase(str1);

	printf("%d \n", result);
	return (0);
}*/
