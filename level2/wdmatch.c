/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsteen-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 14:10:11 by rsteen-s          #+#    #+#             */
/*   Updated: 2020/01/28 18:25:53 by rsteen-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int		ft_strcmp(char *s1, char *s2)
{
	int i;
	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
	{
		i++;
	}

	return (s1[i] - s2[i]);
}
void	ft_putstr(char *str)
{
	int i;
	i = 0;
	while (str[i] != '\0')
	{
		write(1,&str[i],1);
		i++;
	}
	str[i] = '\0';
}

int		ft_strlen(char *str)
{
	int i;
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return(i);
}

int		main(int argc, char **argv)
{
	int i;
	int x;
	int c;
	char str[50];

	i =0;
	c = 0;
	x =0;
	if (argc != 3)
	{
		write(1, "\n",1);
		return(0);
	}
	while (argv[1][i] != '\0')
	{
		while(argv[2][x] != '\0')
		{
			if	(argv[1][i] == argv[2][x])
			{
				str[c] = argv[2][x];
				c++;
				i++;
			}
		x++;
		}
		str[c] = '\0';

		if (argv[2][x] == '\0')
			i++;
	}
	if (ft_strcmp(str,argv[1]) == 0)
	{
		ft_putstr(argv[1]);
	}

	write(1, "\n",1);
	return(0);
}





