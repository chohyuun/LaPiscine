/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyucho <hyucho@student.42Seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 11:53:34 by hyucho            #+#    #+#             */
/*   Updated: 2021/09/23 11:53:53 by hyucho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	length(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	src_length;
	unsigned int	dest_length;

	j = 0;
	i = length(dest);
	dest_length = i;
	src_length = length(src);
	if (size < 1)
		return (src_length);
	else if (size < i)
		return (src_length + size);
	while (i < size - 1 && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest_length + src_length);
}
