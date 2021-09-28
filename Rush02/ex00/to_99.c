/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_99.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwoole <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 18:36:50 by jinwoole          #+#    #+#             */
/*   Updated: 2021/09/26 18:38:24 by jinwoole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ten1(char *num)
{   
	char last_num[1];

	if (num[0] == '2')
	{
      write(1, "twenty", 6);
		  last_num = num[2];
			if (num[1] != '0')
				print_one(last_num);
	}
	if (num[0] == '3')
	{
      write(1, "thirty", 6);
		  last_num = num[2];
			if (num[1] != '0')
				print_one(last_num);
	}
	if (num[0] == '4')
	{
      write(1, "fourty", 6);
		  last_num = num[2];
			if (num[1] != '0')
				print_one(last_num);
	}
}
