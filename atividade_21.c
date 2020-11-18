#include <stdio.h>
#include <locale.h>
//atividade 21 completa

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	float custoFabrica, valorImposto, valorDist, valorTotal;
	
	printf("Entre com o valor de Fabrica do Carro: \n");
	scanf("%f", &custoFabrica);
	
	if (custoFabrica <= 15000.00){
		valorDist = 0.1;
		valorImposto = 0.35;
	}
	else if (custoFabrica > 15000.00 && custoFabrica <= 20000.00){
		valorDist = 0.11;
		valorImposto = 0.4;
	}
	else if (custoFabrica > 20000.00 && custoFabrica <= 40000.00){
		valorDist = 0.12;
		valorImposto = 0.45;
	}
	else {
		valorDist = 0.13;
		valorImposto = 0.5;
	}
	valorDist = custoFabrica * valorDist;
	valorImposto = custoFabrica * valorImposto;
	valorTotal = custoFabrica + valorDist + valorImposto;
	
	printf("Aqui esta a ficha de valores do carro avaliado <pela fábrica> em : %.2f\n Valor distribuidora: %.2f\n valor Impostos : %.2f\n Valor Total : %.2f\n FIM DO PROGRAMA", custoFabrica, valorDist, valorImposto, valorTotal);
	
}
