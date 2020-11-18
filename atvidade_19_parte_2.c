#include <stdio.h>
#include <locale.h>
//atividade 19 parte 2 completo

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	int numNegativos = 0, numPositivos = 0, cnt = 1, numero;
	
	while (cnt <= 5){
		printf("Digite um valor : \n");
		scanf("%i", &numero);
		
		if(numero > 0 )
			numPositivos ++;
		else if (numero < 0)
			numNegativos ++;
		else
			printf("Numero nulo");
		cnt ++;
	}
	
	printf("Numeros Positivos %i\n", numPositivos);
	printf("Numeros Negativos %i", numNegativos);
}
