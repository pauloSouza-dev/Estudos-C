#include <stdio.h>
#include <locale.h>
//atividade 7 completa

float main(){
	setlocale(LC_ALL, "Portuguese");
	
	float custoFabrica, distribuidor, impostos, total;
	
	printf("Qual o custo de Fabrica do carro ? \n");
	scanf("%f", &custoFabrica);
	
	distribuidor = custoFabrica * 12 / 100;
	impostos = custoFabrica * 45 / 100;
	total = custoFabrica + distribuidor + impostos;
	
	printf("O custo total do carro de %0.2f é de %0.2f !", custoFabrica, total);
	printf("O preço do imposto sobre o produto é de %0.2f .", impostos);
	printf("O preço do distribuidor é de %0.2f . ", distribuidor);
}
