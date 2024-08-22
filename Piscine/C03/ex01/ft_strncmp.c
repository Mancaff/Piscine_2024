/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 20:56:25 by fmanca            #+#    #+#             */
/*   Updated: 2024/08/20 20:02:51 by fmanca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && (i < n))
	{
		if (s1[i] != s2[i] || s1[i] == '\0' || s2[i] == '\0')
		{
			return ((s1[i] - s2[i]));
		}
		i++;
	}
	return (0);
}

/*int     main(void)
{
        int     n;    

        char s1[] = "olatudobem";
        char s2[] = "olatudobemm";
    
        n = 12;

        char s3[] = "olatudobem";
        char s4[] = "olatudobemm";

        printf("s1: %d\n", ft_strncmp(s1, s2, n));
        printf("original: %d\n", strncmp(s3, s4, n));
        return (0);
}*/

/*if s1 is equal to s2 return 0
  if s1 is larger than return positive
  if s1 is smaller thoo s2 return negative*/
