#include <stdio.h>
#include <locale.h>
//atividade 10 completa

int main(){
	setlocale(LC_ALL , "Portuguese");
	
	int numero;
	
	printf("Digite um n�mero qualquer: \n");
	scanf("%i", &numero);
	
	if (numero >= 0)
		printf("O n�mero digitado � Positivo!");
	else 
		printf("O n�mero digitado � Negativo!");
}
