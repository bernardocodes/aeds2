#include <stdio.h>
#include <string.h>

void leStr(char *palavra){
	//getchar();//para garantir que não haja lixo no teclado
	scanf("%[^\n]%*c",palavra);
}

//na chamada, define sempre i=0 e j=(strlen(s1) - 1);
void inverteRecursivo(char *s1, char *s2, int i, int j){	
	if(j>=0){
		s2[i] = s1[j];
		i++;
		j--;
		inverteRecursivo(s1,s2,i,j);
	}else{
		s2[i] = '\0';
		return;
	}
}

/*
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
*/

void verificaIgual(char *s1, char *s2){//palíndromo???	
	if(strcmp(s1,s2)==0){
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
		//inverte(s1,s2);
		inverteRecursivo(s1,s2,0,(strlen(s1) - 1));//AQ
		verificaIgual(s1,s2);
	}

	while(strcmp(s1,"FIM")!=0){//leitura das demais
		leStr(s1);
		if(strcmp(s1,"FIM")!=0){//evita análise da str "fim" 
			//inverte(s1,s2);	
			inverteRecursivo(s1,s2,0,(strlen(s1) - 1));//AQ
			verificaIgual(s1,s2);
		}
	}

	return 0;
}

/*método recurssivo --> str como parâmetro --> verifica str == pali
 *printa SIM/NAO*/
