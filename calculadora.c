#include <stdio.h>

/*  1. Criar um programa de calculadora que vai realizando os cálculos entre dois números
    enquanto o usuário desejar. Criar um menu de opções conforme mostrado a seguir:
    1 – Soma
    2 – Subtração
    3 – Multiplicação
    4 – Divisão
    5 – Sair  */

int main()
{
    int opcao = 0;
    float num1, num2, resultado;
    int i;

    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("5 - Sair\n");

    do
    {
        printf("\nDigite a opcao de calculo: ");
        scanf("%i", &opcao);

        if (opcao >= 1 && opcao <= 4)
        {
            printf("\nDigite um numero: ");
            scanf("%f", &num1);
            printf("\nDigite outro numero: ");
            scanf("%f", &num2);
        
            if (opcao == 1)
            {
                resultado = num1 + num2;
                printf("\nResultado da Soma: %.2f", resultado);
            }
            else
            {
                if (opcao == 2)
                {
                    resultado = num1 - num2;
                    printf("\nResultado da Subtracao: %.2f", resultado);
                }
                else
                {
                    if (opcao == 3)
                    {
                        resultado = num1 * num2;
                        printf("\nResultado da Multiplicacao: %.2f", resultado);
                    }
                    else
                    {
                        if (opcao == 4)
                        {
                            if (num2 != 0)
                            {
                                resultado = num1 / num2;
                                printf("\nResultado da Divisao: %.2f", resultado);
                            }
                            else
                            {
                                printf("\nErro, divisao por 0 nao permitida");
                            }
                        }
                    }
                }
            }
        }
        else
        {
            if(opcao > 5 || opcao < 0)
            {
                printf("\nOpcao Invalida, Tente novamente");
            }
        }

    } while (opcao != 5);

    printf("\nCalculadora Encerrada");

    return 0;
}