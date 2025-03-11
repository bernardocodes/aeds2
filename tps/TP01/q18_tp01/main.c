#include <stdio.h>
#include <string.h>
#define CHAVE 3
void ler(char *str){
	scanf("%[^\n]%*c",str);
}

void criptografar(char *s, int chave, char *encrip){//codificar string
	int tam = strlen(s);
	int i;
	for(i=0;i<tam;i++){
		encrip[i] = s[i] + chave;	
	}	
	encrip[i] = '\0';//finaliza str codificada
}

void print(char *s){
	int tam = strlen(s);
	for(int i=0;i<tam;i++){
		printf("%c",s[i]);
	}
	printf("\n");
}

void repete(char str[]){
	
	if(strcmp(str,"FIM")!=0){
		int tam = strlen(str) + 1;//tam sem sobras da str, incluindo o '\0'
		char strCodificada[tam+1];

		criptografar(str,CHAVE,strCodificada);
		print(strCodificada);
		ler(str);
		repete(str);
	}else{
		return;
	}

}

int main(){
	int tamDeclaracao = 2000;
	char str[tamDeclaracao];

	ler(str);	
	repete(str);	
/*
	//func repete
	int tam = strlen(str) + 1;//tam sem sobras da str, incluindo o '\0'
	char strCodificada[tam+1];

	criptografar(str,3,strCodificada);
	print(strCodificada);
*/	
	return 0;
}

/*
-->tratar o problema do x,y,z,espaço???
	R:Não! As saídas esperadas já estão de acordo!!!

	*o jeito fácil seria fazer um if para cada um...
	*o jeito difícil, mas ideal é generalizar
 para qualquer tam de chave
 */


