/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swapbit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsteen-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 09:05:40 by rsteen-s          #+#    #+#             */
/*   Updated: 2020/01/28 09:44:11 by rsteen-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
unsigned char	swap_bits(unsigned char octet)
{
	return((octet >> 4)|(octet << 4));
}

int main()
{
	char c;
	c = 't';
	write(1,&c,1);
	c = swap_bits(c);
	write(1, &c, 1);

	return(0);
}
