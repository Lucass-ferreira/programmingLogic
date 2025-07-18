#include <stdio.h>

int main(){

    int hora_inicio, hora_final, duracao;

    printf("Digite a hora de inicio: ");
    scanf("%d", &hora_inicio);
    printf("Digite a hora final: ");
    scanf("%d", &hora_final);

    if(hora_final > hora_inicio) {
        duracao = hora_final - hora_inicio;
    } else {
        duracao = (24 - hora_inicio) + hora_final;
    }

    printf("O jogo durou: %d Hora(s)", duracao);
    

    return 0;
}