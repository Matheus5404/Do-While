# include <stdio.h>
# include <locale.h>

/* 3. Receber a nota de 5 alunos no módulo 1 e no módulo 2 e calcular a média deles. 
   O usuário só pode digitar notas no intervalo de 0 a 10, caso ele digite um valor inválido, 
   deve digitar novamente.  */

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float nota;
    float notas_modulo1, notas_modulo2;
    float soma_nota1 = 0, soma_nota2 = 0, media_modulo1, media_modulo2;
    int i;

    for(i=0 ; i<5 ; i++)
    {
        do
        {
            printf("\nDigite a nota do aluno do modulo 1 (0 a 10): ");
            scanf("%f", &nota);

            if(nota >= 0 && nota <= 10)
            {
                notas_modulo1 = nota;
                soma_nota1 += nota;
            }
            else
            {
                printf("\nNota invalida, Digite Novamente");
            }

        } while (nota < 0 || nota > 10);
    }

    printf("\n");

    for(i=0 ; i<5 ; i++)
    {
        do
        {
            printf("\nDigite a nota do aluno do modulo 2 (0 a 10): ");
            scanf("%f", &nota);

            if(nota >= 0 && nota <= 10)
            {
                notas_modulo2 = nota;
                soma_nota2 += nota;
            }
            else
            {
                printf("\nNota invalida, Digite Novamente");
            }

        } while (nota < 0 || nota > 10);
    }
    
    printf("\n");

    media_modulo1 = soma_nota1 / 5;
    media_modulo2 = soma_nota2 / 5;

    printf("\n\nA soma total dos alunos do 1 modulo: %.2f", soma_nota1);
    printf("\n\nA media dos alunos do 1 modulo: %.2f", media_modulo1);
    printf("\n\nA soma total dos alunos do 2 modulo: %.2f", soma_nota2);
    printf("\n\nA media dos alunos do 2 modulo: %.2f", media_modulo2);

    return 0;
}