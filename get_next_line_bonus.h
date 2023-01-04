/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazzocc <mmazzocc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 18:30:15 by mmazzocc          #+#    #+#             */
/*   Updated: 2023/01/04 05:34:09 by mmazzocc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1000
# endif

# include <unistd.h>

# include <stdlib.h>

# include <fcntl.h>

# include <stdio.h>

char	*get_next_line(int fd);

char	*ft_read_to_backup(int fd, char *backup);

char	*ft_strchr(char *s, int c);

char	*ft_strjoin(char *backup, char *buff);

size_t	ft_strlen(const char *s);

char	*ft_get_line(char *backup);

char	*ft_backup(char *backup);

#endif
