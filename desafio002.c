#include <stdio.h>
#include <locale.h>
//desafio 2

//Elaborar um algoritmo que leia 10 valores inteiros.
//O algoritmo n�o poder� aceitar o n�mero 0
//mostrar a m�dia dos valores Positivos e dos Negativos

int main ()
{
	//Fun��o da biblioteca Locale que permite a entrada de acentua��o
	setlocale (LC_ALL, "Portuguese");
	
	int numero, i, qntPos = 0, qntNeg = 0, somaPos = 0, somaNeg = 0;
	float mediaPos = 0, mediaNeg = 0;
	
	//Come�ando o la�o FOR para a capta��o dos valores 
	for (i=1; i<=10; i++)
	{
		printf("Entre com um valor: \n");
		scanf("%i", &numero);
		
		//Verificando os valores digitados um de cada vez
		if(numero == 0)
		{
			printf("\n N�mero nulo < 0 > \n\n");
			i = i - 1; //Essa linha permite que o 0 n�o conte como um valor e o programa repita at� chegar a 10 itera��es.
			
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
	
	//Cauculando as m�dias
	if(qntPos > 0)
		mediaPos = (float) somaPos / (float) qntPos;
	if(qntNeg > 0)
		mediaNeg = (float) somaNeg / (float) qntNeg;
	
	//Mostrando na tela os resultados
	if(qntPos > 0)
		printf("A m�dia dos valores Positivos � < %.2f > \n", mediaPos);
	if(qntNeg > 0)
		printf("A m�dia dos valores Negativos � < %.2f > \n", mediaNeg);
}

