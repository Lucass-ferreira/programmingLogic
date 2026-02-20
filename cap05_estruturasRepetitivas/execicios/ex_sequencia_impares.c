#include <stdio.h>

int main(){

    int num_x;

    printf("Digite o valor x: ");
    scanf("%d", &num_x);

    for (int ind = 0; ind <= num_x; ind++){
        if(ind % 2 !=0){
            printf("%d \n", ind);
        }
    }
    
    

    return 0;
}