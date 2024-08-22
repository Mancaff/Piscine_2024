/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 14:14:57 by fmanca            #+#    #+#             */
/*   Updated: 2024/08/14 16:21:20 by fmanca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j] && to_find[j] != '\0')
		{
			j++;
		}
		if (to_find[j] == '\0')
		{
			return (&str[i]);
		}
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char	str[] = "By the end of this week I want to finish c03 and c04";
	char	find[] = "end";

	char	*result = ft_strstr(str, find);

	if (result != 0)
	{
		printf("The similiar string was found in: %s\n", result);
	}
	else
	{
		printf("Similiar string was not found. \n");
	}
	return (0);
}*/

/*this function takes 2 strings as arguments and finds the first
occurrence of the string to_find in the string str*/
