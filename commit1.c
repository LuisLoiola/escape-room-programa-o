#include <stdio.h>

int main() {
    int escolha;

    printf("========================================\n");
    printf("        BEM-VINDO AO ESCAPE ROOM        \n");
    printf("========================================\n");
    printf("Voce acorda em uma sala escura...\n");
    printf("Mas voce tem algumas opcoes para escapar...\n\n");

    printf("Escolha uma porta:\n");
    printf("1 - Porta Matematica\n");
    printf("2 - Porta do Numero Secreto\n");
    printf("3 - Porta do Enigma\n");
    printf("0 - Sair\n\n");
    printf("Sua escolha: ");
    scanf("%d", &escolha);

    printf("\nVoce escolheu a porta %d.\n", escolha);
    printf("(em construcao...)\n");

    return 0;
}
