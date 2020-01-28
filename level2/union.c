/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsteen-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 09:47:00 by rsteen-s          #+#    #+#             */
/*   Updated: 2020/01/28 13:35:17 by rsteen-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int		check(char c, char *str, int i)
{	
	while (i >= 0)
	{
		if (str[i] == c)
			return(0);

		if (str[i] != c)
			i--;
	}
	return(1);
}

int		main(int argc, char **argv)
{
	char str[100];
	int i;
	int x;
	x = 0;
	i = 0;

	if(argc != 3)
	{
		write(1, "\n",1);
		return(0);
	}
	while (argv[1][i] != '\0')
	{
		if (check(argv[1][i], str, i) == 1)
		{
			str[x] = argv[1][i];
			x++;
		}
		i++;
	}
	i = 0;
	while (argv[2][i] != '\0')
	{
		if (check(argv[2][i], str, x) == 1)
		{		
			str[x] = argv[2][i];
			x++;
		}
		i++;
	}
	i = 0;

	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n",1);
	return(0);
}















