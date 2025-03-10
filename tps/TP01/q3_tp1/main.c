#include <stdio.h>
#include <string.h>

void ler(char *s){
	//%d%*c
	scanf("%[^\n]%*c",s);
}
/*
void teste(char c){
	printf("%c\n",c+1);
}
*/
void cript(char *s, int chave, char *encrip){
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
		printf("%c ",s[i]);
	}
}

int main(){
	int n = 10;
	int chave = 3;
	char str[n];
	int tam;	

	ler(str);
	tam = strlen(str) + 1;
	char encrip[tam+1];//para incluir o '\0'

	cript(str,chave,encrip);
	print(encrip);
	
	return 0;
}

//e: str
//s: str cif
