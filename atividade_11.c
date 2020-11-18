#include <stdio.h>
#include <locale.h>
//atividade 11 completa

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	
	printf("Digite um número qualquer: \n");
	scanf("%i", &numero);
	
	if (numero > 0)
		printf("O número %i é Positivo", numero);
	else if (numero == 0)
		printf("O número %i é Nulo", numero);
	else
		printf("O número %i é Negativo", numero);
}
