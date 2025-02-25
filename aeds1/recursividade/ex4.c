/*4)Escreva uma função recursiva que calcula a soma de todos os elementos de um arranjo de números reais.*/

#include <stdio.h> 

void print(float *ar,int i,int tam){
	if(i<tam){
		printf("%f\n",ar[i]);
		print(ar,i+1,tam);
	}else{
		return;//observe que uma função recursiva pode ser void
	}	
}

int main(){
	float arranjo[] = {1.3,22.0,38.777,45.1,18.5};
	print(arranjo,0,5);
	return 0;
}
