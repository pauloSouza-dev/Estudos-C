#include <stdio.h>
#include <locale.h>
//atividade 21 

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numP = 0 , numN = 0 , somaP = 0, somaN = 0,numero, cnt = 1;
	
	while (cnt <= 5){
		printf("Digite um numero:\n");
		scanf("%i", &numero);
		
		if(numero > 0){
			numP ++;
			somaP = somaP + numero;
		}
		else if (numero == 0 )
			printf("Numero invalido.");
		else{
			numN ++;
			somaN = somaN + numero;
		cnt ++;
	}
	
	printf("Numeros Positivos: %i, Numero Negativos: %i\n", numP, numN);
	printf("Soma dos números Positivos : %i, Soma dos números Negativos: %i\n", somaP, somaN);
	printf("FIM DA EXECUÇÂO DO PROGRAMA");
	
}
