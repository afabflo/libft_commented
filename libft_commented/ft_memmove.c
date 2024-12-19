/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afabian- <afabian-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 21:01:16 by afabian-          #+#    #+#             */
/*   Updated: 2024/12/19 21:01:16 by afabian-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void *ft_memove(void *dest, const void *src, size_t n)
{
    unsigned char *d;
    unsigned char *s;
    d = (unsigned char *)dest;
    s = (unsigned char *)src;
    if (s < d && s + n > d)
    {
        while (n--)
            d[n] = s[n];
        return (dest);
    }
    return (ft_memcpy(dest, src, n));
}