/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alajara- <alajara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 18:51:00 by alajara-          #+#    #+#             */
/*   Updated: 2023/04/18 18:04:58 by alajara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# include <fcntl.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <limits.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 2000
# endif

char			*get_next_line(int fd);
char			*get_the_line(char *storage);
char			*clean_storage(char *storage);
char			*gnl_strchr(char *str, int c);
char			*gnl_join_free(char *storage, char *buffer);
unsigned int	gnl_strlen(char *str);
unsigned int	gnl_strlcat(char *dst, char *src, unsigned int dstsize);
unsigned int	gnl_strlcpy(char *dest, char *src, unsigned int size);

#endif

// TODO buffersize peque y siguientes llamadas