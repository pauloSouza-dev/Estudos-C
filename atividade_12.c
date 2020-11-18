#include <stdio.h>
#include <locale.h>
//atividade 12 completa

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	
	printf("Digite um número qualquer: \n");
	scanf("%i", &numero);
	
	if (numero == 0)
		printf("O número %i é NULO ", numero);
	else if (numero % 2 == 0)
		printf("O número %i é  PAR", numero);
	else 
		printf("O número %i é IMPAR", numero);
}
