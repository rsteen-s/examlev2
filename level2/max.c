/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsteen-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 13:35:31 by rsteen-s          #+#    #+#             */
/*   Updated: 2020/01/28 14:03:23 by rsteen-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		max(int *tab, unsigned int len)
{	
	int max;
	int check;

	if (len == 0)
		return(0);

	max = tab[6];
	while(len > 0)
	{
		check = tab[len];
		if (check > max)
		{
			max = check;
		}
		len--;
	}

return(max);
}
	
int main()
{
	int tab[] = { 3, 9, 5, 11, 29, 7};
	printf("%d", max(tab, 0));
	return(0);
}
