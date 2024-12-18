# include <stdio.h>

/* 2. Receber números enquanto o usuário quiser digitá-los (a cada número informado peça que o usuário digite 1 se quiser informar mais um número  ou 2 se quiser parar). 
No final, exibir:
- o maior número;
- a média aritmética dos números. */

int main()
{
    float numero;
    int opcao ;
    float maior = 0, soma = 0, media;
    int contador = 0;

    do
    {
        printf("\nDigite um numero: ");
        scanf("%f", &numero);
        
        printf("\nDigite 1 para continuar ou 2 para parar: ");
        scanf("%i", &opcao);

        soma += numero;
        contador++;

        if(numero > maior)
        {
            maior = numero;
        }
    
    } while (opcao == 1);

    if(contador > 0)
    {
        media = soma / contador;
        printf("\nO maior numero: %.2f\n", maior);
        printf("\nA media dos numeros: %.2f\n", media);
    }
    else
    {
        printf("\nNenhum numero informado...\n");
    }

    return 0;
}