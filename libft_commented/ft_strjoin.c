/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afabian- <afabian-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 21:02:01 by afabian-          #+#    #+#             */
/*   Updated: 2024/12/19 21:02:01 by afabian-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char *ptr;

    ptr = (char *)malloc((ft_strlen(s1) + ft_strlen(s2)) + 1);
    if (!ptr)
        return (NULL);
    ft_memcpy(ptr, s1, ft_strlen(s1) + 1);
    ft_strlcat(ptr, s2, (ft_strlen(ptr) + ft_strlen(s2) + 1));
    return (ptr);
}