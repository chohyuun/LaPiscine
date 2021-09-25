/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arry_tool.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaeukim <gaeukim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 20:03:01 by gaeukim           #+#    #+#             */
/*   Updated: 2021/09/19 20:03:17 by gaeukim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"main.h"

void	remove_space(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while ((str[j - 1] && str[j]) || j == 0)
	{
		str[i] = str[j];
		i++;
		j += 2;
	}
	str[i] = '\0';
}

void	get_values(int **result, char *str)
{
	int	i;

	i = 0;
	while (++i <= g_length)
		result[0][i] = str[i - 1] - '0';
	i = 0;
	while (++i <= g_length)
		result[g_length + 1][i] = str[i + 3] - '0';
	i = 0;
	while (++i <= g_length)
		result[i][0] = str[i + 7] - '0';
	i = 0;
	while (++i <= g_length)
		result[i][g_length + 1] = str[i + 11] - '0';
}

int	**alloc_memory(char *str)
{
	int	i;
	int	j;
	int	**arr;

	i = 0;
	arr = (int **)malloc(sizeof(int *) * g_length + 2);
	while (i < g_length + 2)
	{
		arr[i] = (int *)malloc(sizeof(int) * g_length + 2);
		i++;
	}
	i = 0;
	j = 0;
	while (i < g_length + 2)
	{
		while (j < g_length + 2)
		{
			arr[i][j] = 0;
			j++;
		}
		i++;
	}
	get_values(arr, str);
	return (arr);
}

void	result_print(int **result)
{
	int	i;
	int	j;

	i = 1;
	while (i <= g_length)
	{
		j = 1;
		while (j <= g_length)
		{
			ft_print(result[i][j] + '0');
			if (j != g_length)
			{
				ft_print(' ');
			}
			j++;
		}
		ft_print('\n');
		i++;
	}
}
