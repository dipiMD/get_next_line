/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drakan <drakan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 13:22:44 by drakan            #+#    #+#             */
/*   Updated: 2021/10/25 13:42:24 by drakan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE
# endif

char	*ft_strdup_bonus(const char *str1);
char	*ft_strchr_bonus(const char *str, int c);
char	*ft_strjoin_bonus(char const *s1, char const *s2);
size_t	ft_strlen_bonus(const char *str);
char	*get_next_line(int fd);

#endif