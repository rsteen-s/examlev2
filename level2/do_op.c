/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsteen-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 09:38:26 by rsteen-s          #+#    #+#             */
/*   Updated: 2020/01/27 11:43:55 by rsteen-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	if (nbr < 0)
	{ 
		write(1, "-",1);
		nbr = nbr * -1;
	}
	if ((nbr /10) > 0)
	{
		ft_putnbr(nbr/10);
		ft_putnbr(nbr % 10);
	}


	else 		
		ft_putchar(nbr +'0');
}


int		ft_atoi(char *str)
{
	int sign = 1;
	int counter = 0;
	int ret = 0;

	if (str[counter] == '-' || str[counter] == '+')
	{
		if (str[counter] == '-')
				{
					sign = -1;
					counter++;
				}
	}
	while (str[counter] >= '0' && str[counter] <= '9')
	{
		ret = (ret * 10) + str[counter] -'0';
		counter++;
	}
	return(ret * sign);
}

int		main(int argc, char **argv)
{
	int c;
	int a;
	int b;

	if (argc != 4)
	{
		write (1, "\n", 1);
		return(0);
	}
	
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);

	if (argv[2][0] == '-')
		c = a-b;
	if (argv[2][0] == '+')
		c = a+b;
	if (argv[2][0] == '/')
		c = a/b;
	if (argv[2][0] == '*')
		c = a*b;

ft_putnbr(c);
write(1, "\n",1);
return(0);
}
