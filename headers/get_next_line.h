/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcoze <tcoze@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 19:06:55 by tcoze             #+#    #+#             */
/*   Updated: 2024/03/12 18:36:01 by tcoze            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>

char		*get_next_line(int fd);
char		*ft_bzero_gnl(char *s, size_t n);
void		*ft_calloc_gnl(size_t nmemb, size_t size);
long int	ft_strchr_gnl(char *s, char c);
char		*ft_strjoin_gnl(char *s1, char *s2);
size_t		ft_strlen_gnl(const char *s);

#endif
