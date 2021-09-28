/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hundred.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwoole <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 18:38:32 by jinwoole          #+#    #+#             */
/*   Updated: 2021/09/26 18:43:46 by jinwoole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void    hundred(char *num)
{   
	char last_num[2];

	if (num[0] == '1')
	{
      write(1, "hundred", 7);
		  last_num = &num[2];
			if (num[1] != '0' && num[2] != '0')
				ten1(last_num);
	}
	if (num[0] > '1')
	{
		print_one(num[0]);
    	write(1, "hundred", 7);
		last_num = &num[2];
		if (num[1] != '0' && num[2] != '0')
			ten1(last_num);
	}
}
