/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lastword.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsteen-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 13:08:36 by rsteen-s          #+#    #+#             */
/*   Updated: 2020/01/28 10:53:46 by rsteen-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_isspace(char c)
{
	if( (c == ' ') || (c == '\v') || (c == '\f') || (c == '\t') || (c == '\r') || (c == '\n'))
		return(1);

 return(0);
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

void		ft_printstr(char *str)
{	
	int i;
	
	i = (ft_strlen(str) - 1);
	while (i >= 0)
	{
		write(1, &str[i], 1);
		i--;
	}
}


int		main(int argc,char **argv)
{
	int i;
	int sp;
	int x;
	char str[50];

	x = 0;
	if (argc != 2)
	{
		write(1, "\n", 1);
		return(0);
	}
	i = (ft_strlen(argv[1]) -1);
	
	while ( i >= 0)
	{
		sp = ft_isspace(argv[1][i]); 
				if (sp == 0)
				{
					str[x] = argv[1][i];
					sp = ft_isspace(argv[1][i-1]);
					if (sp == 1)
					{ 
						x++;
						str[x] = '\0';
						i = 0;
					}
					x++;
				}
				i--;
	}
	ft_printstr(str);
	write(1,"\n",1);	
	return(0);
}
	

