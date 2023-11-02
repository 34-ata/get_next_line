/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faata <faata@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 17:47:38 by faata	           #+#    #+#             */
/*   Updated: 2023/10/30 15:08:57 by faata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

char	*get_next_line(int fd);
char	*refill(int fd, char *buffer);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strchr(char *str, char c);
int		ft_strlen(char *str);
char	*get_line_ssd(char *buffer);
char	*cut_line(char *buffer, int len);
#endif