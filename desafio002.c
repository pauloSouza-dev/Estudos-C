#include <stdio.h>
#include <locale.h>
//desafio 2

//Elaborar um algoritmo que leia 10 valores inteiros.
//O algoritmo não poderá aceitar o número 0
//mostrar a média dos valores Positivos e dos Negativos

int main ()
{
	//Função da biblioteca Locale que permite a entrada de acentuação
	setlocale (LC_ALL, "Portuguese");
	
	int numero, i, qntPos = 0, qntNeg = 0, somaPos = 0, somaNeg = 0;
	float mediaPos = 0, mediaNeg = 0;
	
	//Começando o laço FOR para a captação dos valores 
	for (i=1; i<=10; i++)
	{
		printf("Entre com um valor: \n");
		scanf("%i", &numero);
		
		//Verificando os valores digitados um de cada vez
		if(numero == 0)
		{
			printf("\n Número nulo < 0 > \n\n");
			i = i - 1; //Essa linha permite que o 0 não conte como um valor e o programa repita até chegar a 10 iterações.
			
	    }
	    
		else if(numero > 0)
		{
			qntPos ++;
			somaPos += numero;
		}
		else
		{
			qntNeg ++;
			somaNeg += numero;
		}
		
	}
	
	//Cauculando as médias
	if(qntPos > 0)
		mediaPos = (float) somaPos / (float) qntPos;
	if(qntNeg > 0)
		mediaNeg = (float) somaNeg / (float) qntNeg;
	
	//Mostrando na tela os resultados
	if(qntPos > 0)
		printf("A média dos valores Positivos é < %.2f > \n", mediaPos);
	if(qntNeg > 0)
		printf("A média dos valores Negativos é < %.2f > \n", mediaNeg);
}

