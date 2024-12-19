/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afabian- <afabian-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 21:01:49 by afabian-          #+#    #+#             */
/*   Updated: 2024/12/19 21:01:49 by afabian-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
char *ft_strchr(const char *s, int c)
{
    int i;
    i = 0;
    while ((s[i] && (s[i] != (unsigned char)c)))
        i++;
    if (s[i] == (unsigned char)c)
        return ((char *)&s[i]);
    return (NULL);
}