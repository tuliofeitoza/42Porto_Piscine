/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilva-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 02:11:25 by tsilva-f          #+#    #+#             */
/*   Updated: 2024/01/31 02:14:05 by tsilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Função para calcular o fatorial recursivo de um número inteiro não negativo
int ft_recursive_factorial(int nb)
{
    // Verificar se o número é negativo
    if (nb < 0)
        return (0); // Retorna 0 se o número for negativo, pois o fatorial não está definido para números negativos

    // Verificar se o número é 0 ou 1, pois nesses casos o fatorial é sempre 1
    if (nb <= 1)
        return (1); // Retorna 1 para os casos de 0! e 1!

    // Caso geral: calcula o fatorial de nb chamando recursivamente a função com nb - 1
    return (nb * ft_recursive_factorial(nb - 1)); // Retorna nb multiplicado pelo fatorial de nb - 1
}
