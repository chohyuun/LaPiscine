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
	ft_print(argv[argc - 1]);
}
