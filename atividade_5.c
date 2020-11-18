#include <stdio.h>
#include <locale.h>
//atividade 5 completo

float main(){
	setlocale(LC_ALL, "Portuguese");
	float temperatura, temperatura_f, total;
	
	printf("Digite a temperatura atual: \n");
	scanf("%f", &temperatura);
	
	temperatura_f = temperatura * 1,8;
	total = temperatura_f + 32;
	
	printf("%0.2f convertido para Fahrenhit é : %0.2f \n", temperatura, total);
	
}
