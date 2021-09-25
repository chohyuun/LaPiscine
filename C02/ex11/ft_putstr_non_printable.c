/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyucho <hyucho@student.42Seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 20:01:38 by hyucho            #+#    #+#             */
/*   Updated: 2021/09/22 14:32:22 by hyucho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putstr_non_printable(char *str)
{
	unsigned char	a;
	char			*nonprint_arr;
	int				i;
	int				j;

	nonprint_arr = "0123456789abcdef";
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			write(1, &str[i], 1);
		}
		else
		{
			a = (unsigned char)str[i];
			write(1, &"\\", 1);
			j = a / 16;
			write(1, &nonprint_arr[j], 1);
			j = a % 16;
			write(1, &nonprint_arr[j], 1);
		}
		i++;
	}
}
