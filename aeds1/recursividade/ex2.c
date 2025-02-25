#include <stdio.h> 

int fat(int fatorial,int acc, int i){
	if(i<fatorial){
		//acc *= (fatorial - i);
		fat(fatorial,acc * (fatorial - i),i+1);
	}else{
		return acc;
	}
}

int main(){
	int fatorial;
	scanf("%d%*c",&fatorial);
	printf("%d",fat(fatorial,1,0));
	return 0;
}
