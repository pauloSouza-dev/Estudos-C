#include <stdio.h>
#include <locale.h>
//concluido exercicio 1 
int main ()
{
	int numero, quadrado;
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite um n�mero:\n");
	scanf("%i", &numero);
	
	quadrado = numero * numero;
	
	printf("O quadrado do n�mero %i � : %i \n", numero, quadrado);
	
}
