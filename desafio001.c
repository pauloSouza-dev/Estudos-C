//desafio 1
#include <stdio.h>
#include <locale.h>

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	int quantidadePos = 0, quantidadeNeg = 0 , numero, i;
	
	for (i=1; i <=5; i++){
		
		printf("Entre com um valor:\n");
		scanf("%i", &numero);
		
		//verificadores dos n�meros digitado pelo usu�rio
		if(numero != 0)
		{      //Se o n�mero for diferente de 0 Ent�o fa�a oque esta pedindo
			if(numero > 0)    // Se for maior que 0 positivo , e incrementa uma unidade na variavel certa
				quantidadePos ++;
			else			// ja que o n�mero � diferente de 0, e n�o � maior que 0 ent�o ele � menor que 0 , ou seja um n�mero negativo		
				quantidadeNeg ++;
		}
		else                  // Se o n�mero n�o for diferente de 0 ou seja, ser igual a 0 ent�o mostre uma mensagen 
			printf("Valor nulo <0>");
	}
	
	printf("Quantidade de n�meros Positivos %i \n", quantidadePos);
	printf("Quantidade de n�meros Negativos %i \n", quantidadeNeg);
}
