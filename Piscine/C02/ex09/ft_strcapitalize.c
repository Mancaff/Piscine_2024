/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 20:06:23 by fmanca            #+#    #+#             */
/*   Updated: 2024/08/10 21:59:28 by fmanca           ###   ########.fr       */
/*                                                                            */
/* ****************************************************************************/


#include <stdio.h>

char	*ft_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;

	ft_lowercase(str);

	while (str[i] != '\0')
	{
		if (i == 0 || !((str[i - 1] >= 97 && str[i - 1 <= 122]) 
			|| (str[i - 1] >= 65 && str[i - 1] <= 90)
			|| (str[i - 1] >= 48 && str[i - 1] <= 57)))
		{
			if (str[i] >= 97 && str[i] <= 122)
			{
				str[i] = str[i] - 32;
			}
		}
		i++;
	}
	return (str);
}


int	main(void)
{
	char	str[] = "ola, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";

	printf("Before: %s\n", str);

	ft_strcapitalize(str);

	printf("After: %s\n", str);
}
