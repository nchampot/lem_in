/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchampot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 12:13:30 by nchampot          #+#    #+#             */
/*   Updated: 2016/07/19 12:13:33 by nchampot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

/*
** The function `ft_memalloc()` allocates `size` blocks of memory
** (with `malloc(3)`) and fills it with zeroes (with `ft_bzero()`).
** If memory allocation fails, the function returns NULL.
*/

void	*ft_memalloc(size_t size)
{
	void	*mem;

	if (!size)
		return (NULL);
	mem = (void*)malloc(size * sizeof(void*));
	if (!mem)
		return (NULL);
	ft_bzero(mem, size);
	return (mem);
}
