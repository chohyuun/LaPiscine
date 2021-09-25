/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_value.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaeukim <gaeukim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 20:03:32 by gaeukim           #+#    #+#             */
/*   Updated: 2021/09/19 20:03:36 by gaeukim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"main.h"

int	check_value(int **result)
{
	int	i;

	i = 1;
	while (i <= g_length)
	{
		if (check_col_up_value(result, i))
			return (1);
		if (check_col_down_value(result, i))
			return (1);
		if (check_row_left_value(result, i))
			return (1);
		if (check_row_right_value(result, i))
			return (1);
		i++;
	}
	return (0);
}

int	check_col_up_value(int **result, int x)
{
	int	y;
	int	i;
	int	block;

	y = 1;
	i = 1;
	block = 1;
	while (y + i <= g_length)
	{
		if (result[x][y] < result[x][y + i])
		{
			block++;
			y += i;
			i = 1;
		}
		else
			i++;
	}
	if (block == result[x][0])
		return (0);
	else
		return (1);
}

int	check_col_down_value(int **result, int x)
{
	int	y;
	int	i;
	int	block;

	y = g_length;
	i = 1;
	block = 1;
	while (y - i >= 1)
	{
		if (result[x][y] < result[x][y - i])
		{
			block++;
			y -= i;
			i = 1;
		}
		else
			i++;
	}
	if (block == result[x][g_length + 1])
		return (0);
	else
		return (1);
}

int	check_row_left_value(int **result, int y)
{
	int	x;
	int	i;
	int	block;

	x = 1;
	i = 1;
	block = 1;
	while (x + i <= g_length)
	{
		if (result[x][y] < result[x + i][y])
		{
			block++;
			x += i;
			i = 1;
		}
		else
			i++;
	}
	if (block == result[0][y])
		return (0);
	else
		return (1);
}

int	check_row_right_value(int **result, int y)
{
	int	x;
	int	i;
	int	block;

	x = g_length;
	i = 1;
	block = 1;
	while (x - i >= 1)
	{
		if (result[x][y] < result[x - i][y])
		{
			block++;
			x -= i;
			i = 1;
		}
		else
			i++;
	}
	if (block == result[g_length + 1][y])
		return (0);
	else
		return (1);
}
