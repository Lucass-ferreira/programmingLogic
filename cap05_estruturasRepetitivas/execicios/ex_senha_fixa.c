#include <stdio.h>

int main(){


    int senha = 2002, senha_dig;

    printf("Digite a senha: ");
    scanf("%d", &senha_dig);

    while (senha_dig != senha){
        printf("Senha Invalida! Tente novamente: ");
        scanf("%d", &senha_dig);
    }

    printf("Acesso permitido!");
    
    return 0;
}