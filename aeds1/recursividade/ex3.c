/*3)Escreva uma função recursiva que dado dois números x e n , calcula o valor x a n ( x elevo a n ). Não use as funções
de math.h.*/

#include <stdio.h> 

int eleva(int a, int b, int acc, int i){
	if(i<b){
		acc *= a;
		i++;
		eleva(a,b,acc,i);	
	}else{
		return acc;
	}
}

int main(){
	int a,b;
	scanf("%d%*c %d%*c",&a,&b);
	printf("%d",eleva(a,b,1,0));
	return 0;
}
