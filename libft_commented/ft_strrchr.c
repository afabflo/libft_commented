/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afabian- <afabian-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 21:02:32 by afabian-          #+#    #+#             */
/*   Updated: 2024/12/19 21:02:32 by afabian-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int i;
    char *last_occurrence;
    i = 0;
    last_occurrence = NULL;
    while (s[i])
    {
        if (s[i] == (unsigned char)c)
            last_occurrence = (char *)&s[i];
        i++;
    }
    if (s[i] == (unsigned char)c)
        return ((char *)&s[i]);
    return (last_occurrence);
}