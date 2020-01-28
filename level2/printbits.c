/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printbits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsteen-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 11:45:26 by rsteen-s          #+#    #+#             */
/*   Updated: 2020/01/28 08:22:20 by rsteen-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int div;
	int counter;
	div = 128;
	counter = 8;
	while(counter > 0)
	{
		if (octet >= div)
			{
					write(1, "1",1);
					octet = octet - div;
			}
		else 
			{ 
				write(1, "0", 1);
			}
	
	div = div/2;
	counter--;
	}
}
int	main()
{
	unsigned char a = 255;

	print_bits(a);
	return(0);
}

