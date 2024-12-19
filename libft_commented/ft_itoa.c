/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afabian- <afabian-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 20:59:54 by afabian-          #+#    #+#             */
/*   Updated: 2024/12/19 20:59:54 by afabian-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
int ft_numlen(int n, int len)
{
    len = 0;
    if (n < 0)
    {
        n = -n;
        len++;
    }
    while (n)
    {
        n = n / 10;
        len++;
    }
    return len;
}
char *ft_iszero(void)
{
    char *ptr;
    ptr = (char *)malloc(2);
    if (!ptr)
        return (NULL);
    ptr[0] = '0';
    ptr[1] = '\0';
    return (ptr);
}
char *ft_itoa(int n)
{
    char *ptr;
    int len;
    long nlong;
    if (nlong == 0)
    {
        ptr = ft_iszero();
        return ptr;
    }
    len = ft_numlen(n, 0);
    if (nlong < 0)
    {
        nlong = -nlong;
    }
    ptr = (char *)malloc((len + 1) * sizeof(char));
    if (!ptr)
        return NULL;
    while (nlong > 0)
    {
        ptr[--len] = nlong % 10 + '0';
        nlong = nlong / 10;
    }
    if (len != 0)
        ptr[0] = '-';
    return ptr;
}