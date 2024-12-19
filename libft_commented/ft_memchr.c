/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afabian- <afabian-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 21:00:02 by afabian-          #+#    #+#             */
/*   Updated: 2024/12/19 21:00:02 by afabian-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
void *ft_memchr(const void *S, int c, size_t n)
{
    size_t i;
    unsigned const char *strs;
    strs = (unsigned const char *)S;
    i = 0;
    while (i < n)
    {
        if (strs[i] == (unsigned char)c)
        {
            return ((void *)&strs[i]);
        }
        i++;
        return (NULL);
    }
}