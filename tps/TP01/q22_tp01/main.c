#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int somaRecurssiva(int soma, int resto, int quociente, int divisor){
    if(quociente>0){//enquanto...

        quociente = divisor/10;//separar os dígitos e somar um por um
        resto = divisor%10;
        divisor = quociente;
        soma+=resto;
        somaRecurssiva(soma,resto,quociente,divisor);

    }else{
        return soma;
    }
}

int main(){

    char colecaoNum[10];
    int soma = 0;

    scanf("%s",colecaoNum);

    while(strcmp(colecaoNum,"FIM")!=0){
        printf("%d\n",somaRecurssiva(0,0,1,atoi(colecaoNum)));
        //atoi() converte str em inteiro || retorna 0 se n for possível
        scanf("%s",colecaoNum);
    }

    return 0;
}
