/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afabian- <afabian-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 21:02:28 by afabian-          #+#    #+#             */
/*   Updated: 2024/12/19 21:02:28 by afabian-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
char *ft_strnstr(const char *big, const char *child, size_t len)
{
    size_t i;
    size_t j;

    i = 0;
    if (*child == '\0')
        return ((char *)big);
    while ((big[i]) && (i < len))
    {
        j = 0;
        while (((big[i + j] == child[j]) && (i + j < len)))
        {
            if (child[j + 1] == '\0')
                return ((char *)&big[i]);
            j++;
        }
        i++;
    }
    return (NULL);
}