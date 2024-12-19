/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afabian- <afabian-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 21:02:38 by afabian-          #+#    #+#             */
/*   Updated: 2024/12/19 21:02:38 by afabian-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    char *ptr;
    int start;
    int end;

    start = 0;
    end = ft_strlen(s1);
    while (s1[start] && ft_strchr(set, s1[start]))
        start++;
    while (start < end && ft_strchr(set, s1[end - 1]))
        end--;
    ptr = (char *)malloc((end - start + 1) * sizeof(char));
    if (!ptr)
        return (NULL);
    ft_strlcpy(ptr, &s1[start], end - start + 1);
    return (ptr);
}