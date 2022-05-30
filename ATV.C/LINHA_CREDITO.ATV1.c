#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
	float PC, SB, PSB;
	
	setlocale(LC_ALL,"portuguese");
	
	printf("Digite o valor do salário bruto: ");
	scanf("%f", &SB);
	
	printf("Digite o valor da prestação: ");
	scanf("%f", &PC);
	
	PSB = SB * 30/100;
	
	if (PC <= PSB){
		printf("O empréstimo pode ser concedido \n");
	}
	else {
		printf("O empréstimo não pode ser concedido \n");
	}
	system("pause");
}
