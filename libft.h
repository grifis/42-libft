#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

int		ft_isdigit(char c);
int		ft_isalpha(char c);
int		ft_isalnum(char c);
int		ft_isascii(char c);
void	*ft_memset(void *b, int c, size_t len);
size_t	ft_strlen(const char *s);
int		ft_isprint(int c);

#endif
