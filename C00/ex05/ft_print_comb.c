/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyucho <hyucho@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 21:19:55 by hyucho            #+#    #+#             */
/*   Updated: 2021/09/14 21:19:56 by hyucho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_comb(void)
{
	char	arry[3];

	arry[0] = '0';
	while (arry[0] <= '7')
	{
		arry[1] = arry[0] + 1;
		while (arry[1] <= '8')
		{
			arry[2] = arry[1] + 1;
			while (arry[2] <= '9')
			{
				write(1, arry, 3);
				if (arry[0] != '7' || arry[1] != '8' || arry[2] != '9')
					write(1, &", ", 2);
				arry[2]++;
			}
			arry[1]++;
		}
		arry[0]++;
	}
}
