/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaeukim <gaeukim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 20:02:43 by gaeukim           #+#    #+#             */
/*   Updated: 2021/09/19 20:20:36 by gaeukim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"main.h"

void	ft_print(char c)
{
	write(1, &c, 1);
}

void	ft_error(void)
{
	write(1, "Error\n", 6);
}

void	get_length(char *str)
{
	int	i;
	int	length;

	i = 0;
	length = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			g_length++;
		}
		i++;
	}
	g_length = g_length / 4;
}

void	free_arry(int **result)
{
	int	i;

	i = 0;
	while (i < g_length + 2)
	{
		free(result[i]);
		i++;
	}
	free(result);
}

int	main(int argc, char *argv[])
{
	int	**result;

	if (argc != 2)
	{
		ft_error();
		return (0);
	}
	get_length(argv[1]);
	if (!(check(argv[1])))
		return (0);
	remove_space(argv[1]);
	result = alloc_memory(argv[1]);
	if (solve(result, 1, 1))
	{
		ft_error();
		return (0);
	}
	else
	{
		result_print(result);
	}
	return (0);
}
