/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abeyuuta <abeyuuta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 17:18:13 by abeyuuta          #+#    #+#             */
/*   Updated: 2023/05/22 19:57:31 by abeyuuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	int	*ptr;

	if (size > 0 && SIZE_MAX / size < count)
		return (NULL);
	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, count * size);
	return (ptr);
}

// int	main(void)
// {
// 	int	*ptr;
// 	int	i;

// 	ptr = ft_calloc((size_t)SIZE_MAX / 10 + (size_t)1, 10);
// 	i = 0;
// 	printf("ptr:%p\n", ptr);
// 	while (i < 10)
// 	{
// 		printf("%d\n", ptr[i]);
// 		i++;
// 	}
// 	free(ptr);
// }
