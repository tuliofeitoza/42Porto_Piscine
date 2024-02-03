/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilva-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 16:40:40 by tsilva-f          #+#    #+#             */
/*   Updated: 2024/01/29 16:52:23 by tsilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Função principal do programa
int main(int ac, char *av[])
{
    int i = 0; // Inicializa um contador para percorrer a string

    // Loop para iterar sobre os caracteres da string
    while (av[0][i] != '\0')
    {
        write(1, &av[0][i], 1); // Escreve o caractere atual da string na saída padrão
        i++; // Incrementa o contador para passar para o próximo caractere
    }

    write(1, "\n", 1); // Escreve uma nova linha na saída padrão
}

