#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
	int NUMERO;
	
	setlocale(LC_ALL,"portuguese");
	
	printf("Digite um n�mero: ");
	scanf("%d", &NUMERO);
	
	if(NUMERO<0) 
		printf("O n�mero lido � negativo \n");
	else
		printf("O n�mero lido � positivo \n");
		
	system("pause");
}
