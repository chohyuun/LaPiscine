/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyucho <hyucho@student.42Seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 17:08:59 by hyucho            #+#    #+#             */
/*   Updated: 2021/09/27 18:37:37 by hyucho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*i_arr;
	int	i;

	i_arr = malloc(sizeof(int) * (max- min));
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	else if(i_arr == NULL)
		return (-1);
	i = -1;
	while ((min + ++i) < max)
	{
		i_arr[i] = min + i;
	}
	i_arr[i] = '\0';
	*range = i_arr;
	return (i);
}
