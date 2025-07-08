#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){

    char nome[100];
    double horas_trabalhadas, horas_valor, valor_total;

    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';

    printf("Valor por horas trabalhadas: ");
    scanf("%lf", &horas_valor);

    printf("Horas trabalhadas: ");
    scanf("%lf", &horas_trabalhadas);

    valor_total = horas_valor * horas_trabalhadas;

    printf("Ola, %s voce recebeu o total de %.2f por suas horas trabalhadas.", nome, valor_total);
 
    return 0;
}