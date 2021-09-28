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

#endif
