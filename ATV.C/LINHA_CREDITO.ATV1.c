#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
	float PC, SB, PSB;
	
	setlocale(LC_ALL,"portuguese");
	
	printf("Digite o valor do sal�rio bruto: ");
	scanf("%f", &SB);
	
	printf("Digite o valor da presta��o: ");
	scanf("%f", &PC);
	
	PSB = SB * 30/100;
	
	if (PC <= PSB){
		printf("O empr�stimo pode ser concedido \n");
	}
	else {
		printf("O empr�stimo n�o pode ser concedido \n");
	}
	system("pause");
}
