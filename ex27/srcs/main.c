/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 17:06:59 by marykman          #+#    #+#             */
/*   Updated: 2023/10/12 18:56:10 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display_file.h"

int	main(int argc, char **argv)
{
	if (argc < 2)
		return (ft_error(1, NO_ARGS_MSG));
	else if (argc > 2)
		return (ft_error(1, TOO_MANY_ARGS_MSG));
	return (ft_display_file(argv[1]));
}
