#include <stdio.h>
#include <locale.h>
//atividade 19 completo

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	int numA, numB;
	printf("Entre com dois n�meros diferentes:\n");
	scanf("%i%i", &numA, &numB);
	
	if (numA > numB)
		printf("%i, %i", numB, numA);
	else if (numA < numB)
		printf("%i, %i", numA, numB);
	else if (numA == numB)
		printf("N�meros Iguais");
	else
		printf("valor inv�lido");
}
