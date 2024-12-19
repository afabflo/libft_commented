/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afabian- <afabian-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 21:00:17 by afabian-          #+#    #+#             */
/*   Updated: 2024/12/19 21:00:17 by afabian-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
    size_t final_size;
    size_t *ptr;
    if (nmemb == 0 || size == 0)
    {
        ptr = malloc(0);
        if (ptr == NULL)
        {
            return NULL;
        }
        return ptr;
    }
    if (nmemb > SIZE_MAX / size)
    {
        return NULL;
    }
    final_size = nmemb * size;
    ptr = malloc(final_size);
    if (ptr == NULL)
    {
        return NULL;
    }
    ft_bzero(ptr, final_size);
    return (ptr);
}