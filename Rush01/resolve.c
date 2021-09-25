/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolve.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaeukim <gaeukim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 20:04:43 by gaeukim           #+#    #+#             */
/*   Updated: 2021/09/19 20:04:45 by gaeukim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"main.h"

int	insert_value(int **result, int i, int x, int y)
{
	while (i <= g_length && check_range(result, i, x, y))
		i++;
	if (i <= g_length)
		result[x][y] = i;
	else
		result[x][y] = 0;
	return (i);
}

int	fill(int **result, int x, int y, int i)
{
	if (x == g_length && y == g_length)
	{
		if (check_value(result))
		{
			if (i >= g_length)
			{
				result[x][y] = 0;
				return (1);
			}
			else
				return (2);
		}
		else
			return (0);
	}
	return (3);
}

int	solve(int **result, int x, int y)
{
	int	i;

	i = 1;
	while (1)
	{
		i = insert_value(result, i, x, y);
		if (result[x][y] == 0)
			return (1);
		if (fill(result, x, y, i) == 1 || fill(result, x, y, i) == 0)
			return (fill(result, x, y, i));
		else if (fill(result, x, y, i) == 2)
			continue ;
		if (x == g_length)
		{
			if (solve(result, 1, y + 1))
				continue ;
			return (0);
		}
		else
		{
			if (solve(result, x + 1, y))
				continue ;
			return (0);
		}
	}
}

int	check(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (i % 2 == 0 && str[i] > g_length + '0' && str[i] < '1')
		{
			ft_error();
			return (0);
		}
		if (i % 2 == 1 && str[i] != ' ')
		{
			ft_error();
			return (0);
		}
		i++;
	}
	i = (i + 1) / 2;
	if (!(i == 16))
	{
		ft_error();
		return (0);
	}
	return (1);
}

int	check_range(int **result, int index, int x, int y)
{
	int	row;
	int	col;

	row = 1;
	col = 1;
	while (row <= g_length)
	{
		if (index == result[row][y])
			return (1);
		row++;
	}
	while (col <= g_length)
	{
		if (index == result[x][col])
			return (1);
		col++;
	}
	return (0);
}
