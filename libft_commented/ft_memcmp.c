/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afabian- <afabian-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 21:01:08 by afabian-          #+#    #+#             */
/*   Updated: 2024/12/19 21:01:08 by afabian-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;
    unsigned const char *str1;
    unsigned const char *str2;
    str1 = (unsigned const char *)s1;
    str2 = (unsigned const char *)s2;
    i = 0;
    while (i < n)
    {
        if (str1[i] != str2[i])
        {
            return (str1[i] - str2[i]);
        }
        i++;
    }
    return (0);
}