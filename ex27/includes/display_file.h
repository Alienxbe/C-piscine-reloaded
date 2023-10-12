/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:52:49 by marykman          #+#    #+#             */
/*   Updated: 2023/10/12 18:54:26 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DISPLAY_FILE_H
# define DISPLAY_FILE_H

# define BUFFER_SIZE		256
# define NO_ARGS_MSG		"File name is missing.\n"
# define TOO_MANY_ARGS_MSG	"Too many arguments.\n"
# define CANT_READ_MSG		"Cannot read file.\n"

int		ft_display_file(char *filename);

/* --- Utils --- */
int		ft_strlen(char *str);
void	ft_putstr_fd(int fd, char *str);

int		ft_error(int error, char *msg);

#endif