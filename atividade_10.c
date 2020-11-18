#include <stdio.h>
#include <locale.h>
//atividade 10 completa

int main(){
	setlocale(LC_ALL , "Portuguese");
	
	int numero;
	
	printf("Digite um número qualquer: \n");
	scanf("%i", &numero);
	
	if (numero >= 0)
		printf("O número digitado é Positivo!");
	else 
		printf("O número digitado é Negativo!");
}
