/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:46:55 by marykman          #+#    #+#             */
/*   Updated: 2023/10/12 20:21:36 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <limits.h>
#include <string.h>
#include <stdlib.h>

void	ft_putchar(char c);

void	ft_print_alphabet(void);
void	ft_print_numbers(void);
void	ft_is_negative(int n);
void	ft_ft(int *nbr);
void	ft_swap(int *a, int *b);
void	ft_div_mod(int a, int b, int *div, int *mod);
int		ft_iterative_factorial(int nb);
int		ft_recursive_factorial(int nb);
int		ft_sqrt(int nb);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strdup(char *src);
int		*ft_range(int min, int max);
void	ft_foreach(int *tab, int length, void (*f)(int));
int		ft_count_if(char **tab, int (*f)(char*));


int	main(void)
{
	for (int n = 0; n < 30; n++)
		printf("%d! = %d\n", n, ft_recursive_factorial(n));
	return (0);
}