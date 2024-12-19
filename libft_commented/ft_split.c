/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afabian- <afabian-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 21:01:45 by afabian-          #+#    #+#             */
/*   Updated: 2024/12/19 21:01:45 by afabian-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

static size_t ft_counter(char const *s, char c)
{
    size_t i;
    size_t j;

    i = 0;
    j = 0;
    if (!s)
        return (0);
    while (s[i])
        if (s[i++] != c && (s[i] == c || s[i] == '\0'))
            j++;
    return (j);
}

void free_all(char **ptr, size_t i)
{
    while (i--)
        free(ptr[i]);
    free(ptr);
}

char **ft_split(char const *s, char c)
{
    char **ptr;
    size_t len;
    size_t i;

    ptr = malloc(sizeof(char *) * (ft_counter(s, c) + 1));
    if (!ptr)
        return (0);
    i = 0;
    while (*s)
    {
        if (*s != c)
        {
            len = 0;
            while (*s && *s != c && ++len)
                ++s;
            ptr[i] = ft_substr(s - len, 0, len);
            if (!ptr[i++])
                return (free_all(ptr, i - 1), NULL);
        }
        else
            ++s;
    }
    ptr[i] = NULL;
    return (ptr);
}