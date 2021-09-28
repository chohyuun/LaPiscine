/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1_to_20.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwoole <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 18:18:24 by jinwoole          #+#    #+#             */
/*   Updated: 2021/09/26 18:34:52 by jinwoole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void print_one(char *num)
{
	if (num[0] == '0')
		write(1, "zero", 4);
	if (num[0] == '1')
		write(1, "one", 3);
	if (num[0] == '2')
		write(1, "two", 3);
	if (num[0] == '3')
		write(1, "three", 5);
	if (num[0] == '4')
		write(1, "four", 3);
	if (num[0] == '5')
		write(1, "five", 3);
	if (num[0] == '6')
		write(1, "six", 3);
	if (num[0] == '7')
		write(1, "seven", 5);
	if (num[0] == '8')
		write(1, "eight", 4);
	if (num[0] == '9')
		write(1, "nine", 4);
}

void print_20(char *num)
{

	if (num[0] == '1')
	{
		if (num[1] == '0')
			write(1, "ten", 3);
		if (num[1] == '1')
			write(1, "eleven", 6);
		if (num[1] == '2')
			write(1, "twelve", 6);
		if (num[1] == '2')
			write(1, "twelve", 6);	
	}
}
