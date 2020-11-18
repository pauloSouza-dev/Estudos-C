#include <stdio.h>
#include <locale.h>
//atividade 17 completo

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float salBase, salTotal, reajuste;
	
	printf("Entre com seu Sálario: \n");
	scanf("%f", &salBase);
	
	if (salBase < 500)
		reajuste = 15;
	else if (salBase >= 500 && salBase <= 1000)
		reajuste = 10;
	else if (salBase > 1000)
		reajuste = 5;
	else 
		printf("Salário invalido");
	
	reajuste = (salBase * reajuste) / 100;
	salTotal = salBase + reajuste;
	
	printf("O salario de %.2f passa a ser de %.2f após o ajuste de %.2f", salBase, salTotal, reajuste);
}
