#include <stdio.h>
#include <locale.h>
//atividade 12 completa

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	
	printf("Digite um n�mero qualquer: \n");
	scanf("%i", &numero);
	
	if (numero == 0)
		printf("O n�mero %i � NULO ", numero);
	else if (numero % 2 == 0)
		printf("O n�mero %i �  PAR", numero);
	else 
		printf("O n�mero %i � IMPAR", numero);
}
