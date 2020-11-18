#include <stdio.h>
#include <locale.h>
//Atividade 2 completa

float main(){
	
	setlocale(LC_ALL, "Portuguese");
	float quantidade, preco, total;
	
	printf("Qual o valor do produto ? \n");
	scanf("%f", &preco);
	
	printf("Quantidade do produto ? \n");
	scanf("%f", &quantidade);
	
	total = quantidade * preco;
	
	printf("O custo total da compra fica em %0.2f ! \n", total);
}
