#include <stdio.h>
#include <string.h>

void leStr(char *palavra){
	getchar();
	scanf("%s",palavra);
}

void inverte(char *s1, char *s2){
	int i = 0,n=0;
	int j = (strlen(s1) - 1);//pra não pegar a posição do \0
	do{
		s2[i] = s1[j];
		i++;
		j--;	
		n++;
	}while(j>=0);
	s2[i] = '\0';//evita \0 residual
}

void verificaIgual(char *s1, char *s2){	
	if(strcmp(s1,s2)==0){//verifica se são iguais 
		printf("SIM\n");
	}else{
		printf("NAO\n");
	}
}

int main(){
	int tam = 100;//mem
	char s1[tam];
	char s2[tam];
	
	leStr(s1);//leitura
	inverte(s1,s2);
	verificaIgual(s1,s2);

	while(strcmp(s1,"FIM")!=0){
		leStr(s1);
		inverte(s1,s2);
		verificaIgual(s1,s2);
	}

/*

	inverte(s1,s2);

	verificaIgual(s1,s2);


	printf("\ns1 = %s",s1);//sai
	printf("\ns2 = %s",s2);

	puts("");a
*/	
	return 0;
}

/*
	int tam = 10;//mem
	char s1[tam];
	char s2[tam];

	scanf("%s",s1);//leitura
	scanf("%s",s2);

	if(strcmp(s1,s2)==0){//verifica se são iguais 
		printf("IGUAIS\n");
	}else{
		printf("DIFERENTES\n");
	}

	printf("\ns1 = %s",s1);//sai
	printf("\ns2 = %s",s2);
*/
