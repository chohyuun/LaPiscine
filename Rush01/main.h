/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaeukim <gaeukim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 20:04:31 by gaeukim           #+#    #+#             */
/*   Updated: 2021/09/19 20:04:34 by gaeukim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H
# include<stdlib.h>
# include<unistd.h>

int	g_length;

void	ft_error(void);
int		check(char *str);
void	remove_space(char *str);
void	get_values(int **result, char *str);
void	ft_print(char c);
void	result_print(int **result);
int		**alloc_memory(char *str);
int		check_range(int **result, int index, int x, int y);
int		check_row_left_value(int **result, int y);
int		check_row_right_value(int **result, int y);
int		check_col_up_value(int **result, int x);
int		check_col_down_value(int **result, int x);
int		check_value(int **result);
int		solve(int **result, int x, int y);

#endif
