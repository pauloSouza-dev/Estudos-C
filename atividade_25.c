#include <stdio.h>
#include <locale.h>
//atividade 24 completo

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero, somaPar = 0, somaImpar = 0 , valorPar = 0, valorImpar = 0, cnt = 1;
	
	while (cnt <= 5){
		
		printf("Digite um valor\n");
		scanf("%i", &numero);
		
		if(numero != 0){
			if(numero % 2 == 0){
				valorPar ++;
				somaPar = somaPar + numero;
			}
			else{
				valorImpar ++;
				somaImpar = somaImpar + numero;
			}
		}
		cnt ++;
	}
	
	printf("Valores Pares : %i , Soma dos valores Pares : %i\n", valorPar, somaPar);
	printf("Valores Impares : %i ,Soma dos valores Impares : %i\n", valorImpar, somaImpar);
}
