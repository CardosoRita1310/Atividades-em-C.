#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
	float SALARIO, AUMENTO, REAJUSTE;
	
	setlocale(LC_ALL, "portuguese");
	printf("Informe o sal�rio: ");
	scanf("%f", &SALARIO);
	
	if (SALARIO < 500) 
	AUMENTO = SALARIO * 15/100;
		else if (SALARIO <= 1000)
		AUMENTO = SALARIO * 10/100;
		else
		AUMENTO = SALARIO * 5/100;
	REAJUSTE = SALARIO + AUMENTO;
	printf("O reajuste � de: %f \n ", REAJUSTE);
	
	system("pause");
}

