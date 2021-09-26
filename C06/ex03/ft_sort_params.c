#include<unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

void	sort(char *s1, char *s2, char *temp)
{
	int		k;

	k = 0;
	while (s1[k] && s2[k])
	{
		if (s1[k] > s2[k])
		{
			ft_strcpy(temp, s1);
			ft_strcpy(s1, s2);
			ft_strcpy(s2, temp);
			return ;
		}
		k++;
	}
}

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
	int		i;
	int		j;
	char	*tmp;

	i = 1;
	if (argc == 2)
		ft_print(argv[1]);
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc)
		{
			sort(argv[i], argv[j], tmp);
			j++;
		}
		i++;
	}
	i = 0;
	while (++i < argc)
		ft_print(argv[i]);
}
