#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
	int ESTOQUE, CALCULO, PRODUZIR;
 	setlocale(LC_ALL,"portuguese");
 	
 	printf("Digite a quantidade de peças no estoque: ");
 	scanf("%d", &ESTOQUE);
 	
 	if(ESTOQUE<500)
	CALCULO = ESTOQUE * 30/100;
 	else if (ESTOQUE <=1000)
	 
 		CALCULO = ESTOQUE * 20/100;
 		else
 		CALCULO = ESTOQUE * 10/100;
 
    PRODUZIR = CALCULO + ESTOQUE;
    printf("A quantidade que deverá ser produzida é: %d \n", PRODUZIR);
    
    system("pause");

}
