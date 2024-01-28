/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilva-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 03:49:10 by tsilva-f          #+#    #+#             */
/*   Updated: 2024/01/28 04:10:51 by tsilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Protótipo da função que será definida posteriormente
void ft_print_comb(void);

// Definição da função ft_print_comb
void ft_print_comb(void)
{       
        int z; // Variável para as unidades
        int u; // Variável para as dezenas
        int d; // Variável para as centenas

        z = 0; // Inicializa as unidades com 0
        while (z <= 7) // Loop para as unidades, limitando até 7 para evitar a repetição de combinações
        {
                u = z + 1; // Inicializa as dezenas, garantindo que seja maior que as unidades
                while(u <= 8) // Loop para as dezenas, limitando até 8 para evitar a repetição de combinações
                {
                        d = u + 1; // Inicializa as centenas, garantindo que seja maior que as dezenas
                        while(d <= 9) // Loop para as centenas, limitando até 9 para evitar a repetição de combinações
                        {
                                char z_c = 48 + z; // Converte o valor de z em caractere
                                char u_c = 48 + u; // Converte o valor de u em caractere
                                char d_c = 48 + d; // Converte o valor de d em caractere

                                // Escreve os caracteres na saída padrão (normalmente o terminal)
                                write(1, &z_c, 1);
                                write(1, &u_c, 1);
                                write(1, &d_c, 1);
                                // Verifica se não é a última combinação e escreve a vírgula e o espaço
                                if (z != 7 || u != 8 || d != 9)
                                        write(1, ", ", 2);
                                d++; // Incrementa as centenas
                        }
                        u++; // Incrementa as dezenas
                }
                z++; // Incrementa as unidades
        }
}       

// Função principal do programa
int main()
{       
        ft_print_comb(); // Chama a função para imprimir as combinações
}

