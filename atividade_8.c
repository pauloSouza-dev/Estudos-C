#include <stdio.h>
#include <locale.h>
//atividade 8 completa

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2, soma, sub, choice;
	
	printf("Digite o primeiro número: \n");
	scanf("%i", &n1);
	printf("Digite o segundo número: \n");
	scanf("%i", &n2);
	
	soma = n1 + n2;
	sub = n1 - n2;
	
	printf("Escolha 1 Para soma e 2 Para Subtração !\n");
	scanf("%i", &choice);
	
	if (choice == 1)
		printf("A soma entre o número %i e o número %i é %i .", n1, n2, soma);
	else if (choice == 2)
		printf("A subtração entre o número %i e o número %i é %i . ", n1, n2, sub);
	else 
		printf("O valor escolhido não corresponde a nenhuma operação!");
	
}
