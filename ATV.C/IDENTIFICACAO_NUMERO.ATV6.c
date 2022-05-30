#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
	float NUMERO;
	
	setlocale(LC_ALL,"portuguese");
	printf("Digite um  número: ");
	scanf("%f", &NUMERO);
	
	if(NUMERO<0)
		printf("O número digitado é negativo \n");
		else if(NUMERO == 0)
			printf("O numero é nulo \n");
		else
			printf("O número digitado é positivo \n");
	
	system("pause");
}
