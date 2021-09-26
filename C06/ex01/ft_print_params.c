#include<unistd.h>

void	ft_print(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str += 1;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	while (++i < argc)
	{
		ft_print(argv[i]);
	}
	return (0);
}
