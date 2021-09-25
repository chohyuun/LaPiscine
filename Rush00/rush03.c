/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchoi <bchoi@student.42Seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 18:22:29 by bchoi             #+#    #+#             */
/*   Updated: 2021/09/12 18:22:42 by bchoi            ###   ########.fr       */
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
			if ((tempX == 1 && tempY == 1) || (tempX == 1 && tempY == b))
				ft_putchar('A');
			else if ((tempX == a && tempY == 1) || (tempX == a && tempY == b))
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
