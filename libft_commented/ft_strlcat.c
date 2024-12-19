/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afabian- <afabian-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 21:02:05 by afabian-          #+#    #+#             */
/*   Updated: 2024/12/19 21:02:05 by afabian-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

size_t ft_strlcar(char *dst, const char *src, size_t size)
{
    size_t s;
    size_t d;
    d = ft_strlen(dst);
    s = 0;
    if (size <= d)
        return (size + ft_strlen(src));
    while (d + s < size - 1 && src[s])
    {
        dst[d + s] = src[s];
        s++;
    }
    dst[d + s] = '\0';
    return (d + ft_strlen(src));
}