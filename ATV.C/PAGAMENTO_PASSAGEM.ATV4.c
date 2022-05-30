#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL,"portuguese");
	int IDADE;
	
	printf("Digite a idade do passageiro: ");
	scanf("%d", &IDADE);
	
	if (IDADE <= 5)
	printf("Crianças até 5 anos – Não Pagam Passagem \n");
	else if(IDADE >= 65)
		printf("Adultos com mais de 65 anos – Isentos de Pagamento de Passagem \n");
		else
			printf("Passageiros entre 6 e 64 anos – Pagam Passagem \n");
	
	system("pause");
}
