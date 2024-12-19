/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afabian- <afabian-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 21:00:07 by afabian-          #+#    #+#             */
/*   Updated: 2024/12/19 21:00:07 by afabian-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Aqui convertimos una cadena de caracteres (string) que representa un numero en un entero , algo como
int.Parse() en C# o Integer.parseInt() en Java.
*/
#include "libft.h"

int ft_atoi(const char *str)
{
    int i;
    int sign;
    int result;

    result = 0; // almacena el resultado de la conversion
    sign = 1;
    i = 1;
    // recorremos mientras sea un espacio en blanco
    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
    {
        i++;
        // si encuentra un signo positivo o negativo se ajusta a 1 o -1 garantizando la conversion exacta del tipo
    }
    if (str[i] == '-' || str[i] == '+')
    {
        // aqui es la comprobacion si es 1 no se hace nada si es -1 se asigna a -1 que es negativo
        if (str[i] == '-')
        {
            sign = -1;
        }
    }
    // esto es como Char.IsDigit() en C# o Character.isDigit() en Java recorre solo los digitos
    while (str[i] >= '0' && str[i] <= '9')
    {
        // el resultado es igual a este mismo multiplicado por 10 mas el valor del caracter en la posicion i
        //  menos el valor de '0'
        result = result * 10 + str[i] - '0';
        //result * 10 desplaza el valor de result una posicion  decimal a la izquierda
        //str[i] - '0' convierte el caracter en un numero entero por ejemplo '3' - '0' = 3
        i++;
    }
    return (result * sign);
}
