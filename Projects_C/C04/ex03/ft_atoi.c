/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilva-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 03:24:50 by tsilva-f          #+#    #+#             */
/*   Updated: 2024/01/31 03:30:47 by tsilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Função para converter uma string para um número inteiro
int ft_atoi(char *str)
{
    int i = 0; // Variável de índice para percorrer a string
    int sign = 1; // Variável para armazenar o sinal do número
    int result = 0; // Variável para armazenar o resultado da conversão

    // Ignorar espaços em branco e caracteres de controle no início da string
    while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
    {
        i++;
    }

    // Verificar o sinal do número
    while (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
        {
            sign *= -1; // Se o sinal for '-', altera o sinal do número
        }
        i++;
    }

    // Converter os dígitos para o número inteiro
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + str[i] - '0'; // Converte o caractere para o dígito correspondente
        i++;
    }

    return (result * sign); // Retorna o número convertido com o sinal correto
}
