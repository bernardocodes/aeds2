#include <stdio.h>
#include <string.h>

int main(){
	char vet[10];
	scanf("%s",vet);

	//printf("%s\n",vet);	

	int tam = strlen(vet);
	//printf("%d\n",tam);

	if(tam == 8){
		//br
		printf("%d\n",1);
	}else if(tam == 7){
		//sul
		printf("%d\n",2);
	}else{
		//falsa
		printf("%d\n",0);
	}
	return 0;
}
