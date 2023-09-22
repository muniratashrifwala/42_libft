/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtashrif <mtashrif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 17:12:35 by mtashrif          #+#    #+#             */
/*   Updated: 2023/07/13 15:40:06 by mtashrif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <limits.h>
# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <stdlib.h>

int			ft_isalpha(int i);
int			ft_isdigit(int i);
int			ft_isalnum(int i);
int			ft_isprint(int i);
int			ft_isascii(int i);
size_t		ft_strlen(const char *str);
int			ft_toupper(int i);
int			ft_tolower(int i);
char		*ft_strchr(const char *str, int c);
char		*ft_strrchr(const char *str, int c);
size_t		ft_strlcpy(char *dst, const char *src, size_t size);
size_t		ft_strlcat(char *dest, const char *src, size_t destsize);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
char		*ft_strnstr(const char *big, const char *little, size_t len);
void		ft_bzero(void *s, size_t n);
int			ft_atoi(const char *s);
void		*ft_memcpy(void *dest, const void *src, size_t n);
void		*ft_memmove(void *str1, const void *str2, size_t n);
void		*ft_memset(void *str, int c, size_t n);
void		*ft_memchr(const void *str, int c, size_t n);
int			ft_memcmp(const void *str1, const void *str2, size_t n);
void		*ft_calloc(size_t nitems, size_t size);
char		*ft_strdup(const char *string);
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strtrim(char const *s1, char const *set);
char		**ft_split(char const *s, char c);
char		*ft_itoa(int n);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void		ft_striteri(char *s, void (*f)(unsigned int, char*));
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char *s, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);
#endif
