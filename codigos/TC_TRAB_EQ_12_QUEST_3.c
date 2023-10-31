#include <stdio.h>
#include <locale.h> //biblioteca para defini��es locais, aqui estou usando para poder usar caracteres especiais (mudar a codifica��o de UTF-8 para ISO 8859-1)

/*
1- ler n�meros digitados - OK
1.1- deixar o loop do tamanho do array automaticamente - OK
2- finalizar quando for 0 - OK
3- imprimir soma dos n�meros - OK
4- imprimir a quantidade de n�meros - OK
*/

int main(){
    //definindo para reconhecer caracteres especiais, a partir da biblioteca locale.h
    setlocale(LC_ALL, "Portuguese_Brazil");
    //criando as vari�veis
    int nums[5], cont = 0, soma = 0, tam;

    printf("Digite os n�meros a serem lidos, digite 0 para finalizar a leitura.\n");
    //loop para a leitura dos n�meros
    for(int i=0; i<nums[i]; i++){
        scanf("%d", &nums[i]);
        if (nums[i]==0){
            printf("Leitura finalizada\n");
            break;
        }
        cont++;
        soma += nums[i];
    }
    printf("A soma dos n�meros �: %d\n", soma);
    printf("A quantidade de n�meros lidos foi: %d", cont);
}