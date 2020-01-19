#include <stdio.h>
#include <stdlib.h>
#define NUMERO_DE_TENTATIVAS 5

int main()
{
    // imprime cabecalho do nosso jogo
    printf("\n**************************************\n");
    printf("Bem vindo ao nosso jogo de adivinhacao\n");
    printf("**************************************\n");

    int numerosecreto = 42;

    int chute;

    for (int i = 1; i <= NUMERO_DE_TENTATIVAS; i++)
    {
        printf("Tentativa %d de %d\n", i, NUMERO_DE_TENTATIVAS);
        printf("Qual e o seu chute? ");
        scanf("%d", &chute);

        if (chute < 0)
        {
            printf("voce nao pode chuter numeros negativos\n");
            i--;
            continue;
        }
        
        int acertou = (chute == numerosecreto);
        int maior = (chute > numerosecreto);
        int menor = (chute < numerosecreto);

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
    }
    printf("FIM DO JOGO!");
}
