#include <stdio.h>
#include <locale.h>
//atividade 16 completa

int main(){
	setlocale(LC_ALL , "Portuguese");
	
	float salarioBase, salarioTotal, reajuste;
	
	printf("Entre com o seu salário para cauculo de reajuste: \n");
	scanf("%f", &salarioBase);
	
	reajuste = (salarioBase * 10) / 100;
	salarioTotal = salarioBase + reajuste;
	
	printf("O salário de %.2f passa a ser %.2f após o reajuste de %.2f ..", salarioBase, salarioTotal, reajuste);
}
