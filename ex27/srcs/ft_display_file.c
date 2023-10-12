/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 17:11:40 by marykman          #+#    #+#             */
/*   Updated: 2023/10/12 18:58:04 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include "display_file.h"

int	ft_display_file(char *filename)
{
	int		fd;
	int		ret;
	char	buff[BUFFER_SIZE];

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (ft_error(1, CANT_READ_MSG));
	ret = 1;
	while (ret > 0)
	{
		ret = read(fd, buff, BUFFER_SIZE);
		write(STDOUT_FILENO, buff, ret);
	}
	if (close(fd) < 0)
		return (1);
	if (ret < 0)
		return (1);
	return (0);
}
