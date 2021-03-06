/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgoliath <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 22:12:34 by mgoliath          #+#    #+#             */
/*   Updated: 2021/12/12 13:03:17 by mgoliath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# if defined BUFFER_SIZE
#  if BUFFER_SIZE < 0
#   undef BUFFER_SIZE
#   define BUFFER_SIZE 0
#  endif
# endif

# ifndef  BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdio.h>

typedef struct s_list
{
	int				fd;
	char			*remainder;
	struct s_list	*next;
}	t_list;

char	*get_next_line(int fd);
char	*ft_strdup(const char *src);
t_list	*ft_find_remainder(t_list **lst, t_list **prev, int fd);
void	ft_remove_rlst(t_list **lst, t_list *rlst);
t_list	*ft_lstadd_front(t_list **lst, int fd);
char	*ft_strlcpy(size_t rsize, const char *src, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
char	*ft_strjoin(const char *s1, const char *s2);

#endif
