#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){

	int IDADE;

	setlocale(LC_ALL,"portuguese");
	
	printf("Digite a idade: ");
	scanf("%d", &IDADE);
	
	if(IDADE < 16)
		printf("Não eleitor \n");
		else if((IDADE >= 18) && (IDADE < 65))
			printf("Eleitor obrigatorio \n");
		else
			printf("Eleitor facultativo \n");
			
	system("pause");	

}
