/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyucho <hyucho@student.42Seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 17:09:05 by hyucho            #+#    #+#             */
/*   Updated: 2021/09/27 18:50:09 by hyucho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>

int length(char str)
{
	int	i;

	while (str[i])
		i++;
	return (i);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		len;
	int		i;

	i = -1;
	length = 0;
	while (++i < size)
		len += length(strs[i]);
	result = malloc(sizeof(char) * len);
	if (size == 0)
		return (&result);

}
