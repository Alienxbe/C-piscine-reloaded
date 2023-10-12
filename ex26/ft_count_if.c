/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 13:12:43 by marykman          #+#    #+#             */
/*   Updated: 2023/10/12 18:58:35 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	count;

	if (!tab || !f)
		return (0);
	count = 0;
	while (*tab)
		if (f(*tab++) == 1)
			count++;
	return (count);
}
