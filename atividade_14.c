#include <stdio.h>
#include <locale.h>
//atividade 14 completa

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	
	printf("Entre com um número:\n");
	scanf("%i", &numero);
	
	if(numero == 0)
		printf("Este número é Nulo!");
	else if(numero % 5 == 0)
		printf("Este número é divisivel por 5!");
	else
		printf("O número não é divisivel por 5 !");
}
