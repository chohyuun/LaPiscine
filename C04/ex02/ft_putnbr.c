/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyucho <hyucho@student.42Seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 13:08:03 by hyucho            #+#    #+#             */
/*   Updated: 2021/09/23 13:08:07 by hyucho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	print(int nb)
{
	char	pt_num;

	if (nb == 0)
		return ;
	else
	{
		print(nb / 10);
		pt_num = nb % 10 + '0';
		write(1, &pt_num, 1);
	}
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		if (nb == -2147483648)
		{
			write(1, &"-2147483648", 11);
			return ;
		}
		write(1, "-", 1);
		nb *= -1;
	}
	if (nb == 0)
		write(1, "0", 1);
	else
		print(nb);
}
