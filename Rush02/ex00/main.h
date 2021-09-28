#ifndef MAIN_H
#define MAIN_H

#include<fcntl.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

void	ft_putchar(char c);
char *open_numbers(void);
char **ft_dynamic_value(void);
char **ft_temp(char *str);
int ft_error(int argc, char **argv);
int	ft_atoi(char *str);
int	check_point(char *str);
int	divide1(int len);
int	divide2(int len);
void	print_one(char *num);
void	print_20(char *num);
void	hundred(char *num);	
void	ten1(char. *num);

#endif
