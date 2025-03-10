#include <stdio.h>
#include <string.h>

void ler(char *str){
	//%d%*c
	scanf("%[^\n]%*c",str);
}

void criptografar(char *s, int chave, char *encrip){
	int tam = strlen(s);
	int i;
	for(i=0;i<tam;i++){
		encrip[i] = s[i] + chave;	
	}	
	encrip[i] = '\0';
}

void print(char *s){
	int tam = strlen(s);
	for(int i=0;i<tam;i++){
		printf("%c",s[i]);
	}
	printf("\n");
}

int main(){
	int tamDeclaracao = 10;
	int chave = 3;
	char str[tamDeclaracao];
	int tam;	

	ler(str);

	tam = strlen(str) + 1;//para incluir o '\0'
	char strCodificada[tam+1];

	criptografar(str,chave,strCodificada);
	print(strCodificada);
	
	return 0;
}

//e: str
//s: str cif

//tratar o problema do x,y,z,espaço
/*o jeito fácil é fazer um if para cada um...
 * o jeito difícil, mas ideal é generalizar
 para qualquer tam de chave*/
