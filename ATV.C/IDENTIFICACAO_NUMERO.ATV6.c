#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
	float NUMERO;
	
	setlocale(LC_ALL,"portuguese");
	printf("Digite um  n�mero: ");
	scanf("%f", &NUMERO);
	
	if(NUMERO<0)
		printf("O n�mero digitado � negativo \n");
		else if(NUMERO == 0)
			printf("O numero � nulo \n");
		else
			printf("O n�mero digitado � positivo \n");
	
	system("pause");
}
