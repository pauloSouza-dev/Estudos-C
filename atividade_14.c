#include <stdio.h>
#include <locale.h>
//atividade 14 completa

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	
	printf("Entre com um n�mero:\n");
	scanf("%i", &numero);
	
	if(numero == 0)
		printf("Este n�mero � Nulo!");
	else if(numero % 5 == 0)
		printf("Este n�mero � divisivel por 5!");
	else
		printf("O n�mero n�o � divisivel por 5 !");
}
