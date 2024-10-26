#include <stdio.h>

int main(){
	int valor, cedulas_cem, cedulas_cinq, cedulas_dez, cedulas_uni;
    
	printf("\tDigite o valor: ");
	scanf("%d", &valor);

	cedulas_cem = valor/100;
    valor = valor%100;
    cedulas_cinq = valor/50;
    valor = valor%50;
    cedulas_dez = valor/10;
    valor = valor%10;
    cedulas_uni = valor;
    
    printf(" Calculando quantidade minina de cedulas...\n ");
     printf("----------------------------------------\n");
  if (cedulas_cem > 0) {
        printf(" %d Cédulas de 100,00;\n", cedulas_cem);
    }
    if (cedulas_cinq > 0) {
        printf(" %d Cédulas de 50,00;\n", cedulas_cinq);
    }
    if (cedulas_dez > 0) {
        printf(" %d Cédulas de 10,00;\n", cedulas_dez);
    }
    if (cedulas_uni > 0) {
        printf(" %d Cédulas de 1,00;\n", cedulas_uni);
    }
}
