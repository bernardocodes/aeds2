/*1)Escreva uma função recursiva que, dado dois números x e n , calcula o valor x∗n ( x multiplicado por n ). Não use
o operador de multiplicação.*/

#include <stdio.h>

int multiplicar(int a, int b, int acc){
	if(b>0){
		acc+=a;
		multiplicar(a,b-1,acc);//observe que não poderia ser b--	
	}else{
		return acc;
	}
}

int main(){
	int a,b;
	scanf("%d%*c",&a);	
	scanf("%d%*c",&b);	
	printf("%d",multiplicar(a,b,0));
	return 0;
}
