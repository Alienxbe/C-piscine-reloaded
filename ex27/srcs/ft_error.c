/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 18:50:13 by marykman          #+#    #+#             */
/*   Updated: 2023/10/12 18:56:44 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "display_file.h"

int	ft_error(int error, char *msg)
{
	ft_putstr_fd(STDERR_FILENO, msg);
	return (error);
}
