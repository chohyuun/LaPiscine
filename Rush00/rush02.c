/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchoi <bchoi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 02:54:21 by bchoi             #+#    #+#             */
/*   Updated: 2021/09/12 02:54:53 by bchoi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int a, int b)
{
	int	tempX;
	int	tempY;

	tempY = 1;
	while (tempY <= b && a != 0 && b != 0)
	{
		tempX = 1;
		while (tempX <= a)
		{
			if ((tempX == 1 && tempY == 1) || (tempX == a && tempY == 1))
				ft_putchar('A');
			else if ((tempX == 1 && tempY == b) || (tempX == a && tempY == b))
				ft_putchar('C');
			else if (tempX == 1 || tempX == a || tempY == b || tempY == 1)
				ft_putchar('B');
			else
				ft_putchar(' ');
			tempX++;
		}
		tempY++;
		ft_putchar('\n');
	}
}
