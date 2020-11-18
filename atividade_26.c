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
			printf("Número 0 é nulo.\n");
	}
	
	if (contPar > 0)
		mediaPar = (float) somaPar / (float) contPar;
	
	if (contImpar > 0)
		mediaImpar = (float) somaImpar / (float) contImpar;
	
	printf("A média dos valores Pares é %.2f\n", mediaPar);
	printf("A média dos valores Impares é %.2f\n", mediaImpar);
}
