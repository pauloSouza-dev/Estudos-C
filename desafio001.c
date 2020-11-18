//desafio 1
#include <stdio.h>
#include <locale.h>

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	int quantidadePos = 0, quantidadeNeg = 0 , numero, i;
	
	for (i=1; i <=5; i++){
		
		printf("Entre com um valor:\n");
		scanf("%i", &numero);
		
		//verificadores dos números digitado pelo usuário
		if(numero != 0)
		{      //Se o número for diferente de 0 Então faça oque esta pedindo
			if(numero > 0)    // Se for maior que 0 positivo , e incrementa uma unidade na variavel certa
				quantidadePos ++;
			else			// ja que o número é diferente de 0, e não é maior que 0 então ele é menor que 0 , ou seja um número negativo		
				quantidadeNeg ++;
		}
		else                  // Se o número não for diferente de 0 ou seja, ser igual a 0 então mostre uma mensagen 
			printf("Valor nulo <0>");
	}
	
	printf("Quantidade de números Positivos %i \n", quantidadePos);
	printf("Quantidade de números Negativos %i \n", quantidadeNeg);
}
