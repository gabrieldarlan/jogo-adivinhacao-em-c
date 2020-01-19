#include <stdio.h>
#include <stdlib.h>
int main()
{
    // imprime cabecalho do nosso jogo
    printf("\n**************************************\n");
    printf("Bem vindo ao nosso jogo de adivinhacao\n");
    printf("**************************************\n");

    int numerosecreto = 42;

    int chute;

    printf("Qual e o seu chute? ");
    scanf("%d", &chute);

    int acertou = (chute == numerosecreto);

    if (acertou)
    {
        printf("Parabens! Voce acertou!\n");
        printf("Jogue de novo, voce e um bom jogador");
    }
    else
    {
        int maior = (chute > numerosecreto);
        if (maior)
        {
            printf("Seu chute foi maior que o numero secreto\n");
        }
        else
        {
            printf("Seu chute foi menor que o numero secreto\n");
        }
    }
}
