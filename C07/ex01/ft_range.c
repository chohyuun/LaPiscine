/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyucho <hyucho@student.42Seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 17:08:52 by hyucho            #+#    #+#             */
/*   Updated: 2021/09/27 18:01:02 by hyucho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	*i_arr;
	int	i;

	i = 0;
	i_arr = malloc(sizeof(int) * (max - min));
	if (min >= max || i_arr == NULL)
		return (NULL);
	while ((min + i) != max)
	{
		i_arr[i] = (min + i);
		i++;
	}
	i_arr[i] = '\0';
	return (i_arr);
}
