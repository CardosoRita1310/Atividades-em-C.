#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
	int NUMERO;
	
	setlocale(LC_ALL,"portuguese");
	
	printf("Digite um número: ");
	scanf("%d", &NUMERO);
	
	if(NUMERO<0) 
		printf("O número lido é negativo \n");
	else
		printf("O número lido é positivo \n");
		
	system("pause");
}
