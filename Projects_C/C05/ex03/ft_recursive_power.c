/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilva-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 21:18:30 by tsilva-f          #+#    #+#             */
/*   Updated: 2024/01/31 22:16:18 by tsilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Função para calcular a potência de um número de forma recursiva
int ft_recursive_power(int nb, int power)
{
    // Verifica se a potência é negativa
    if (power < 0)
        return (0); // Retorna 0 se a potência for negativa, pois não está definido para potências negativas

    // Caso especial: potência igual a 0
    if (power == 0)
        return (1); // Retorna 1 para qualquer número elevado a 0

    // Caso geral: calcula a potência de nb chamando recursivamente a função com power - 1
    return (nb * ft_recursive_power(nb, power - 1)); // Retorna nb multiplicado pela potência recursiva de nb com power - 1
}
