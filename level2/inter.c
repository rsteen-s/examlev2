#include <unistd.h>

void	ft_checkdoubles(char *test)
{
	int x;
	int v;
	char c;
	x = 0;

	while (test[x] != '\0')
	{
		c = test[x];
		if (test[x] != ' ')
		{
			write(1, &c,1);
			v = x + 1;
			while (test[v] != '\0')
			{	
				if (test[v] == c)
				test[v] = ' ';
				v++;
			}
		}
		x++;
	}
}
		

int	main(int argc, char **argv)
{
	int i;
	int c;
	int x;
	i = 0;
	c = 0;
	x = 0;

	char *test[50];

	if ( argc != 3)
	{ 
		write(1, "\n",1);
		return(0);
	}
	while (argv[1][i] != '\0')
	{
		while (argv[2][c] != '\0')
		{ 	
			if(argv[2][c] == argv[1][i])
			{
				test[x] = &argv[1][i]; 
				x++;
			}
			c++;
		}
		i++;
	}
	ft_checkdoubles(*test);
	write(1,"\n",1);
	return(0);
}
