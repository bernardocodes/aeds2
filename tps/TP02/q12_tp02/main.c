#include <stdio.h>

void print(int *v){
	int tam = 10;
	for(int i=0;i<tam;i++){
		printf("%d ",v[i]);
	}
}

void ler(int *v){
	int tam = 10;
	for(int i=0;i<tam;i++){
		scanf("%d%*c",&v[i]);
	}
}

void ord1(int i){
	if(i<tam-1){
		//chama ord2		
	}else{
		return;
	}
}

void ord2(int i, int j){
	if(j<tam-1-i){

	}else{
		return;
	}
}

void ordenar(int *v){
	int tam = 10;
	for(int i=0;i<tam-1;i++){//f1 repetição simples	
		for(int j=0;j<tam-1-i;j++){//f2 repetição simples
			if(v[j] > v[j+1]){
				//swap
				int temp = v[j];
				v[j] = v[j+1];
				v[j+1] = temp;
			}
		}	
	}		
}

int main(){
	int n = 10;
	int vet[n];
	ler(vet);
	//ordenar(vet);
	ord1(0);
	print(vet);
	return 0;
}
//essa quest:
//o q vai ser a chave de pesquisa?,
//o q é o arquivo de log?,
//tratar o empate,
//geral -----------
//tratamento de excessão,
//arquivo em java,
//charset,
//_só muda o recheio (métodos de ordenação,etc),
//_quest 1 e 2 até semSanta - resto fim do mês,
