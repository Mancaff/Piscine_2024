/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 18:45:35 by fmanca            #+#    #+#             */
/*   Updated: 2024/08/06 15:27:41 by fmanca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
#include <stdio.h>*/

/* Function that assigns the value 42
to the integer that is pointed to by multiple pointers*/
void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

/*int main(void)
{
	int     n;
	int     *ptr8;
	int     **ptr7;
	int     ***ptr6;
	int     ****ptr5;
	int     *****ptr4;
	int     ******ptr3;
	int     *******ptr2;
	int     ********ptr1;
	int     *********ptr;

	n	= 0;

	// Configure the pointers so that each bridges to the next
	ptr8    = &n;
	ptr7    = &ptr8;
	ptr6    = &ptr7;
	ptr5    = &ptr6;
	ptr4    = &ptr5;
	ptr3    = &ptr4;
	ptr2    = &ptr3;
	ptr1    = &ptr2;
	ptr    = &ptr1;

	ft_ultimate_ft(ptr); //function changes the value of (n) to 42
 
	printf("%i",n);
	return(0);

}*/
