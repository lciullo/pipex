/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 15:01:44 by lciullo           #+#    #+#             */
/*   Updated: 2023/03/20 10:52:53 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

# define LIBFT_H

# include <stdlib.h>

# include <unistd.h>

# include <stdarg.h>

# include <fcntl.h>

# include <stdint.h>

//# ====================== LIBFT ====================== #

//# ============ STRING ============ #

//# ---- libft string functions ---- #

size_t			ft_strlen(const char *str);

char			*ft_strdup(const char *src);

char			*ft_substr(const char *s, unsigned int start, size_t len);

char			*ft_strjoin(char *s1, char *s2);

int				ft_strncmp(char *s1, char *s2, size_t n);

char			*ft_strchr(char *str, int c);

char			**ft_split(char const *s, char c);

size_t			nb_words(char const *s, char c);

char			*ft_itoa(int n);

void			*ft_calloc(size_t nb_elements, size_t size);

void			ft_bzero(void *s, size_t n);

char			*ft_strnstr(const char *str, const char *search, size_t n);

//# ---- free functions ---- #

void			free_array(char **arr);

void			secure_free_array(char **arr, size_t line);

//# ============ PRINT ============ #

//# ---- ft_printf --- #

int				ft_printf(const char *format, ...);

void			ft_putchar(char c, int *size);

void			ft_putstr(char *str, int *size);

void			ft_putnbr(int number, int *size);

void			ft_putnbr_base(long int nb, long int len, \
					char *base, int *size);

void			check_arg(char c, va_list arg, int *size);

//# ---- Print to stderr --- #

void			ft_putstr_fd(char *s, int fd);

#endif
