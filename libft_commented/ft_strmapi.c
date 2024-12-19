/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afabian- <afabian-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 21:02:19 by afabian-          #+#    #+#             */
/*   Updated: 2024/12/19 21:02:19 by afabian-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int i;
    char *ptr;

    if (!s || !f)
        return (NULL);
    ptr = (char *)malloc(ft_strlen(s) + 1);
    if (!ptr)
        return (NULL);
    i = 0;
    while (s[i])
    {
        ptr[i] = f(i, s[i]);
        i++;
    }
    ptr[i] = '\0';
    return (ptr);
}