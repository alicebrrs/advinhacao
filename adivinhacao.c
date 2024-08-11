#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("\n\n");
    printf("          P  /_\\  P                              \n");
    printf("         /_\\_|_|_/_\\                            \n");
    printf("     n_n | ||. .|| | n_n         Bem vindo ao     \n");
    printf("     |_|_|nnnn nnnn|_|_|     Jogo de Adivinhacao! \n");
    printf("    |\" \"  |  |_|  |\"  \" |                     \n");
    printf("    |_____| ' _ ' |_____|                         \n");
    printf("          \\__|_|__/                              \n");
    printf("\n\n");


    printf("Voce tera chances infinitas para descobrir um numero secreto de 1 ate 100. Boa sorte!\n");

    srand(time(0));
    int numerosecreto = rand() % 100;

    int chute;
    int tentativas = (1);
    double pontos = 10000;

    while(1){
        printf("\nTentativa %d\n", tentativas);
        printf("Qual e o seu chute?\t");
        scanf("%d", &chute);
        printf("\nSeu %d chute foi %d\n", tentativas, chute);

        if(chute < 0){
            printf("Voce nao pode chutar numeros negativos!\n");
            continue;
        }

        int maior = (chute > numerosecreto);
        double pontosfinais = (abs(pontos - (tentativas * 5)));
        int acertou = (chute == numerosecreto);


        if(acertou){
            printf("\n            OOOOOOOOOOO               \n");
            printf("          OOOOOOOOOOOOOOOOOOO           \n");
            printf("       OOOOOO  OOOOOOOOO  OOOOOO        \n");
            printf("     OOOOOO      OOOOO      OOOOOO      \n");
            printf("   OOOOOOOO  #   OOOOO  #   OOOOOOOO    \n");
            printf("  OOOOOOOOOO    OOOOOOO    OOOOOOOOOO   \n");
            printf(" OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
            printf(" OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
            printf(" OOOO  OOOOOOOOOOOOOOOOOOOOOOOOO  OOOO  \n");
            printf("  OOOO  OOOOOOOOOOOOOOOOOOOOOOO  OOOO   \n");
            printf("   OOOO   OOOOOOOOOOOOOOOOOOOO  OOOO    \n");
            printf("     OOOOO   OOOOOOOOOOOOOOO   OOOO     \n");
            printf("       OOOOOO   OOOOOOOOO   OOOOOO      \n");
            printf("          OOOOOO         OOOOOO         \n");
            printf("               OOOOOOOOOOO              \n");
            printf("\nParabens! Voce acertou!\n");
            printf("\nVoce fez %.2f pontos. Ate a proxima!\n", pontosfinais);

            break;

            } else if(maior){
                printf("O numero secreto e menor que %d\n", chute);
            }
              else{
                printf("O numero secreto e maior que %d\n", chute);
            }

        printf("\n");

        tentativas++;
    }
    printf("Voce usou %d tentativas!\n", tentativas);
    printf("\nFim de jogo. Obrigada por jogar! <3\n");
}
