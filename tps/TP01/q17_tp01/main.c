
#include <stdio.h>
#include <string.h>

void leStr(char * str){//leitura
	//getchar();
	scanf("%[^\n]",str);
//	printf("str = %s\n",str);	
}

void inverte(char *palavra, char *invertida){
	int n = strlen(palavra)-1;
//	printf("tam = %d\n",n);
	int i;	
	for(i=0;i<=n+1;i++){//no outro eu fiz com o do-while
		invertida[i] = palavra[n];
		n--;
	}
	invertida[i] = '\0';	
}

int main(){
	int tam = 10;//mudar tam depois
	char palavra[tam];
	char invertida[tam];

	leStr(palavra);	
	printf("str = %s\n",palavra);
	inverte(palavra,invertida);

	printf("chegou = %s\n",invertida);
	return 0;
}

/*método recurssivo --> str como parâmetro --> verifica str == pali
 *printa SIM/NAO*/
