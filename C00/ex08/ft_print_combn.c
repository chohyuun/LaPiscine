/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyucho <hyucho@student.42Seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 11:41:17 by hyucho            #+#    #+#             */
/*   Updated: 2021/09/25 16:49:05 by hyucho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	print(char arry[], int n, int check)
{
	int	i;

	i = -1;
	if (check == 1)
		write(1, & ", ", 2);
	while (++i < n)
		write(1, & arry[i], 1);
}

void	ft_run(int n, char arry[])
{
	int	i;

	i = n;
	while (1)
	{
		i--;
		if (arry[i] != 10 - n + i + '0')
			break ;
	}
	arry[i] += 1;
	while (i < n)
	{
		arry[i + 1] = arry[i] + 1;
		i++;
	}
}

void	ft_print_combn(int n)
{
	 int	index;
	char	arrychar[10];

	if (n < 1 || n > 9)
		return ;
	index = -1;
	while (++index < n)
		arrychar[index] = index + '0';
	print(arrychar, n, 0);
	while (arrychar[0] != (10 - n) + '0' || arrychar[n - 1] != '9')
	{
		if (arrychar[index - 1] != '9')
			arrychar[n - 1] += 1;
		else
			ft_run(n, arrychar);
		print(arrychar, n, 1);
	}
}
int main(int argc, char **argv)
{
	int i;

	if (argc == 1 || argc > 2 || argv[1][1] != '\0')
		write(1, "\n", 1);
	else
	{
		i = argv[1][0] - '0';
		ft_print_combn(i);
	}
	return (0);
}
