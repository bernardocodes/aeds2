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
