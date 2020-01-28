/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revbit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsteen-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 16:35:08 by rsteen-s          #+#    #+#             */
/*   Updated: 2020/01/28 11:22:57 by rsteen-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned char		ft_findbits(unsigned char octet)
{
	int counter;
	int bits;
	int i;
	unsigned char rev;
	
	bits  = 128;
	counter = 8;
	i = 1;

	while (counter > 0)
	{
		if (octet >= bits)
		{ 
			rev = (rev + i);
			octet = octet - bits;
		}

	bits = bits/2;
	i = (i * 2);
	counter--;

	}
	return(rev);
}


int		main()
{
	unsigned char x;
	unsigned char c;
	c = 2; 
	x = ft_findbits(c);
	write(1, &x, 1);
}

