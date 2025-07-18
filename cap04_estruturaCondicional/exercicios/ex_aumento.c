#include <stdio.h>

int main(){

    double salario, novo_salario;
    int porcentagem;

    printf("Digite seu salario: ");
    scanf("%lf", &salario);

    if(salario <= 1000.00){
        porcentagem = 20;
        novo_salario = (salario * porcentagem) / 100;
    } else if (salario <= 3000.00){
        porcentagem = 15;
        novo_salario = (salario * porcentagem) / 100;
    } else if (salario <= 8000.00){
        porcentagem = 10;
        novo_salario = (salario * porcentagem) / 100;
    } else {
        porcentagem = 5;
        novo_salario = (salario * porcentagem) / 100;
    }

    printf("Novo salario: %.2f \n", salario + novo_salario);
    printf("Aumento: %.2f \n", novo_salario);
    printf("Porcentagem: %d porcento \n", porcentagem);

    return 0;
}