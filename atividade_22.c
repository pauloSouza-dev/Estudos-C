#include <stdio.h>
#include <locale.h>
//atividade 20 completo

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	int somaPos = 0, somaNeg = 0, cnt = 1 ,numero;
	
	while(cnt <= 5){
		printf("Entre com um valor: \n");
		scanf("%i", &numero);
		
		if(numero > 0)
			somaPos = somaPos + numero;
		else 
			somaNeg = somaNeg + numero;
		cnt ++;
	}
	
	printf("A soma de todos os valores Positivos é %i\n", somaPos);
	printf("A soma de todos os valores negativos é %i", somaNeg);
}
