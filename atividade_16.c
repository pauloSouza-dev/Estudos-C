#include <stdio.h>
#include <locale.h>
//atividade 16 completa

int main(){
	setlocale(LC_ALL , "Portuguese");
	
	float salarioBase, salarioTotal, reajuste;
	
	printf("Entre com o seu sal�rio para cauculo de reajuste: \n");
	scanf("%f", &salarioBase);
	
	reajuste = (salarioBase * 10) / 100;
	salarioTotal = salarioBase + reajuste;
	
	printf("O sal�rio de %.2f passa a ser %.2f ap�s o reajuste de %.2f ..", salarioBase, salarioTotal, reajuste);
}
