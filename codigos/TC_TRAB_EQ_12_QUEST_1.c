#include <stdio.h>
#include <locale.h> //biblioteca para defini��es locais, aqui estou usando para poder usar caracteres especiais]

/*
1- Ler sequ�ncia de n�meros - OK
2- Informar em tela a cada n�mero lido se s�o maiores que 100 - OK
    Menor que 10 - OK
    igual a 20, 30 e 40 - OK
3- Finalizar quando for igual a 0 - OK
4- Quantidade de n�meros lidos - OK
5- Quantidade lidos em cada se��o

*/
int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");
    int nums[100], cont = 0;

    printf("Digite os n�meros a serem lidos, diferentes de 0: \n");
    while(1){
        int num;
        scanf("%d", &num);
        if(num==0){
            printf("N�mero nulo (0) digitado\n");
            break;
        }
        if(num > 100){
            printf("%d ", num);
            printf("� maior que 100 \n");
        }
        if(num < 10)
        {
            printf("%d ", num);
            printf("� menor que 10 \n");
        }
        if(num == 20)
        {
            printf("%d ", num);
            printf("� igual a 20 \n");
        } else if(num == 30){
            printf("%d ", num);
            printf("� igual a 30 \n");
        } else if(num == 40){
            printf("%d ", num);
            printf("� igual a 40 \n");
        }
        
        
        nums[cont] = num;
        cont++;
    }

        printf("Esta � a quantidade de n�meros lidos: \n");
        printf("%d ", cont);

    return 0;
}