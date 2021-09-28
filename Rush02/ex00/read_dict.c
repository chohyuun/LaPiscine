/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwoole <indibooks@naver.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 10:57:06 by jinwoole          #+#    #+#             */
/*   Updated: 2021/09/25 14:24:33 by hyucho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	**ft_temp(char *str);
char	*open_numbers(void)
{
	int	dict_open;
	int	dict_read;
	char *numbers;
	char *n;
	int i;

	i = 0;
	numbers = (char*)malloc(9999 * sizeof(char));
	dict_open = open("numbers.dict", O_RDONLY);	
	dict_read = read(dict_open, numbers, 9999);
	n = (char*)malloc((dict_read + 1) * sizeof(char));
	while(i < dict_read)
	{
		n[i] = numbers[i];
		i++;
	}
	n[i] = '\0';
	return (n);
}

char	**ft_dynamic_value(void)
{
	char	**str;
	int		i;

	i = -1;
	str = (char **)malloc(sizeof(char *) * 100);
	while (++i < 100)
		str[i] = (char *)malloc(sizeof(char) * 100);
	return (str);
}

char	**ft_temp(char *str)
{
	char	**print_data;
	int		i;
	int		j;
	int		k;

	print_data = ft_dynamic_value();
	i = 0;
	j = 0;
	k = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n' || (str[i] == ':' && str[i + 1] == ' '))
		{
			i++;
			if (str[i] == ' ')
				i++;
			print_data[k][j] = '\0';
			printf("\n");
			k++;
			j = 0;
			continue ;
		}
		print_data[k][j] = str[i];
		printf("%c", print_data[k][j]);
		j++;
		i++;
	}
	return (print_data);
}
