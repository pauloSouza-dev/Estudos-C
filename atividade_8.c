#include <stdio.h>
#include <locale.h>
//atividade 8 completa

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2, soma, sub, choice;
	
	printf("Digite o primeiro n�mero: \n");
	scanf("%i", &n1);
	printf("Digite o segundo n�mero: \n");
	scanf("%i", &n2);
	
	soma = n1 + n2;
	sub = n1 - n2;
	
	printf("Escolha 1 Para soma e 2 Para Subtra��o !\n");
	scanf("%i", &choice);
	
	if (choice == 1)
		printf("A soma entre o n�mero %i e o n�mero %i � %i .", n1, n2, soma);
	else if (choice == 2)
		printf("A subtra��o entre o n�mero %i e o n�mero %i � %i . ", n1, n2, sub);
	else 
		printf("O valor escolhido n�o corresponde a nenhuma opera��o!");
	
}
