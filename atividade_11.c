#include <stdio.h>
#include <locale.h>
//atividade 11 completa

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	
	printf("Digite um n�mero qualquer: \n");
	scanf("%i", &numero);
	
	if (numero > 0)
		printf("O n�mero %i � Positivo", numero);
	else if (numero == 0)
		printf("O n�mero %i � Nulo", numero);
	else
		printf("O n�mero %i � Negativo", numero);
}
