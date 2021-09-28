#include "main.h"

int	ft_error(int argc, char **argv)
{
	int	num;

	check_point(argv);
	num = ft_atoi(argv);
	if (argc == 2)
	{
		if (num < 0)
		{
			return (0);
		}
	}
	else
		return (0);
	return (1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	minus;
	int	nb;

	nb = 0;
	i = 0;
	minus = 1;
	if (str[0] == '-')
		minus *= -1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = (nb * 10) + (str[i] - '0');
		i++;
	}
	nb *= minus;
	return (nb);
}

int	check_point(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[0] == '\0' || str[0] == ' ')
			return (0);
		if (str[i] == '.')
			return (0);
		i++;
	}
	return (1);
}
