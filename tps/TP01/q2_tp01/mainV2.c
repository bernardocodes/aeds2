#include <stdio.h>
#include <string.h>

void leStr(char *palavra){
	//getchar();//para garantir que não haja lixo no teclado (leitura de multiplos num e char)
	scanf("%[^\n]%*c",palavra);
	//printf("%s",palavra);
}

void inverte(char *s1, char *s2){
	int i = 0;
	int j = (strlen(s1) - 1);//setar para a posição da última letra (e não o \0)
	do{
		s2[i] = s1[j];
		i++;
		j--;	
	}while(j>=0);// = (para incluir a primeira posição da str)
	s2[i] = '\0';
}

void verificaIgual(char *s1, char *s2){	
	if(strcmp(s1,s2)==0){//verifica se são iguais (palíndromos)
		printf("SIM\n");
	}else{
		printf("NAO\n");
	}
}

int main(){
	int tam = 2000;
	char s1[tam];
	char s2[tam];
	
	leStr(s1);//leitura da primeira str

	if(strcmp(s1,"FIM")!=0){//evita análise da str "fim"
		inverte(s1,s2);
		verificaIgual(s1,s2);
	}

	while(strcmp(s1,"FIM")!=0){//leitura das demais
		leStr(s1);
		if(strcmp(s1,"FIM")!=0){//evita análise da str "fim" 
			inverte(s1,s2);
			verificaIgual(s1,s2);
		}
	}

	return 0;
}

/*segunda versão do código da questão 2, onde os seguintes problemas foram corrigidos:

FIM de primeira (não pode printar nada);
oi (str de dois char) seguido de FIM;
*/

/*
*ainda pode melhorar mexendo no charset;
*oi ainda, criando um método para verificar "FIM", reutilizando código
*/
