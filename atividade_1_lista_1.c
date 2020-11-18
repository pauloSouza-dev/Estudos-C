#include <stdio.h>
#include <locale.h>
//concluido exercicio 1 
int main ()
{
	int numero, quadrado;
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite um número:\n");
	scanf("%i", &numero);
	
	quadrado = numero * numero;
	
	printf("O quadrado do número %i é : %i \n", numero, quadrado);
	
}
