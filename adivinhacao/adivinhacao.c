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
    int tentativas = 1;
    int pontos = 1000;

    while (1)
    {
        printf("Tentativa %d\n", tentativas);
        printf("Qual e o seu chute? ");
        scanf("%d", &chute);

        if (chute < 0)
        {
            printf("voce nao pode chuter numeros negativos\n");
            continue;
        }

        int acertou = (chute == numerosecreto);
        int maior = (chute > numerosecreto);

        if (acertou)
        {
            printf("Parabens! Voce acertou!\n");
            printf("Jogue de novo, voce e um bom jogador\n");
            break;
        }
        else if (maior)
        {
            printf("Seu chute foi maior que o numero secreto\n");
        }
        else
        {
            printf("Seu chute foi menor que o numero secreto\n");
        }
        tentativas++;
        int pontosperdidos = (chute - numerosecreto) / 2;
        pontos = pontos - pontosperdidos;
    }
    printf("FIM DO JOGO!\n");
    printf("Voce acertou em %d tentativas\n", tentativas);
    printf("Total de pontos: %d\n", pontos);
}
