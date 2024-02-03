/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilva-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 16:52:48 by tsilva-f          #+#    #+#             */
/*   Updated: 2024/01/29 17:06:15 by tsilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Função principal do programa
int main(int ac, char **av)
{
    int f = 1; // Inicializa o índice do primeiro argumento (ignorando o nome do programa)

    // Loop para iterar sobre os argumentos da linha de comando
    while (f < ac)
    {
        int i = 0; // Inicializa um contador para percorrer a string atual

        // Loop para iterar sobre os caracteres da string atual
        while (av[f][i] != '\0')
        {
            write(1, &av[f][i], 1); // Escreve o caractere atual da string na saída padrão
            i++; // Incrementa o contador para passar para o próximo caractere
        }

        f++; // Passa para o próximo argumento
        write(1, "\n", 1); // Escreve uma nova linha na saída padrão após cada argumento
    }
}

