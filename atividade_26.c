#include <stdio.h>
#include <locale.h>
//atividade 25 completa

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float mediaPar = 0 , mediaImpar = 0;
	int cnt = 1, num, contPar = 0, contImpar = 0, somaPar = 0, somaImpar = 0;
	
	while (cnt <= 5){
		
		printf("Digite um valor:\n");
		scanf("%i", &num);
		
		if(num != 0 ){
			if(num % 2 == 0){
				contPar ++;
				somaPar += num;
			}
			else{
				contImpar ++;
				somaImpar += num;
			}
			cnt ++;
		}
		else 
			printf("N�mero 0 � nulo.\n");
	}
	
	if (contPar > 0)
		mediaPar = (float) somaPar / (float) contPar;
	
	if (contImpar > 0)
		mediaImpar = (float) somaImpar / (float) contImpar;
	
	printf("A m�dia dos valores Pares � %.2f\n", mediaPar);
	printf("A m�dia dos valores Impares � %.2f\n", mediaImpar);
}
