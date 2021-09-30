/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyucho <hyucho@student.42Seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 17:09:05 by hyucho            #+#    #+#             */
/*   Updated: 2021/09/30 19:47:57 by hyucho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>

int	length(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

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

int	total_len(int size, char **strs)
{
	int	i;
	int	len;

	i = -1;
	len = 0;
	while (++i < size)
		len += length(strs[i]);
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		i;
	int		len;

	i = -1;
	if (!size)
	{
		result = (char *)malloc(sizeof(char) * 0);
		result[0] = 0;
		return (result);
	}
	len = total_len(size, strs);
	result = (char *)malloc(sizeof(char) * len + 1);
	if (!result)
		return (result);
	i = -1;
	while (++i < size)
	{
		result = ft_strcpy(result, strs[i]);
		if (i + 1 < size)
			result = ft_strcpy(result, sep);
	}
	*result = '\0';
	return (result);
}
