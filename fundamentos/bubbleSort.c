#include <stdio.h>
#include <stdlib.h>

void printVet(int *vet){
    int tam = sizeof(vet);
    for(int i=0;i<tam;i++){
        printf("%d ",vet[i]);
    }
}

void swap(){

}

void bubble(int *vet){
    int tam = sizeof(vet);

    for(int i=0;i<tam-1;i++){

        for(int j=0;j<(tam-1)-i;j++){

            if(vet[j] > vet[j+1]){

                int temp = vet[j];//swap
                vet[j] = vet[j+1];
                vet[j+1] = temp;

            }

        }

    }

}

int main()
{
    int vet[] = {9, 1, 8, 2, 7, 3, 6, 4, 5};

    bubble(vet);

    printVet(vet);
    return 0;
}
