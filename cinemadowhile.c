#include <stdio.h>

/*  4. Criar um programa para auxiliar o operador de caixa de uma sala de cinema.
    Considerações:
    - a capacidade máxima da sala de cinema é de 200 pessoas por sessão, porém,
    não existe um número mínimo de pessoas para que uma sessão seja iniciada;
    - estudantes e idosos pagam meia entrada.
    Entrada de dados inicial (apenas uma vez no início):
    - Valor da entrada integral
    Entrada de dados do cliente (repetida para cada cliente):
    1 – Integral
    2 – Estudante
    3 – Idoso
    4 – Iniciar sessão
    Quando o operador escolher iniciar a sessão ou a sala lotar, exibir:
    - o total arrecadado;
    - o valor médio pago por pessoa na sala;
    - a quantidade de cada tipo de pessoa dentro da sala.    */

int main()
{
    float entrada = 30, meia_entrada;
    int opcao, quantidade_inteira = 0, quantidade_estudante = 0, quantidade_idoso = 0;
    float total_arrecadado1, total_arrecadado2, total_arrecadado3, valor_medio, total;

    do
    {
        printf("\n1 - Integral");
        printf("\n2 - Estudante");
        printf("\n3 - Idoso");
        printf("\n4 - Iniciar sessao");

        printf("\n\nDigite a opcao de entrada de (1 a 4): ");
        scanf("%i", &opcao);

        if (opcao == 4)
        {
            printf("\nIniciar sessao...");
        }
        else
        {
            if (opcao == 1)
            {
                entrada * 1;
                quantidade_inteira++;
                printf("\nIntegral no valor de: %.2f\n", entrada);
                total_arrecadado1 = entrada * quantidade_inteira;
            }
            else
            {
                if (opcao == 2)
                {
                    meia_entrada = entrada / 2;
                    quantidade_estudante++;
                    printf("\nEstudante paga meia no valor de: %.2f\n", meia_entrada);
                    total_arrecadado2 = meia_entrada * quantidade_estudante;
                }
                else
                {
                    if (opcao == 3)
                    {
                        meia_entrada = entrada / 2;
                        quantidade_idoso++;
                        printf("\nIdosos paga meia no valor de: %.2f\n", meia_entrada);
                        total_arrecadado3 = meia_entrada * quantidade_idoso;
                    }
                }
            }
            total = total_arrecadado1 + total_arrecadado2 + total_arrecadado3;
            valor_medio = total / 3;
        }

    } while (opcao >= 1 && opcao < 4);

    printf("\nQuantidade de pessoas que pagam inteira: %i", quantidade_inteira);
    printf("\nQuantidade de estudantes que pagam meia: %i", quantidade_estudante);
    printf("\nQuantidade de idosos que pagam inteira: %i", quantidade_idoso);

    printf("\n\nTotal arrecadado no cinema: %.2f", total);
    printf("\n\nValor medio pago por pessoa: %.2f", valor_medio);

    return 0;
}