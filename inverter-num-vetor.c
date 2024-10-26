#include <stdio.h>

int main(){
	int num[5]={};
	int i, j;
	
	printf("\tDigite 5 numeros: \n");
	for(i=0; i<5; i++){
		printf(" Digite o numero %d: ", i);
		scanf("%d", &num[i]);	
}
    printf("------------------------\n");
    printf(" Invertendo os numeros..\n");
	  printf(" Numeros inversos: \n");
	    for(j=4; j>=0; j--){
		    printf(" %d-", num[j]);
	}
}
