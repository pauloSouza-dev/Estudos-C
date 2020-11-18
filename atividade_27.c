#include <stdio.h>
#include <locale.h>
//atividade ultima completa

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float mediaPos = 0 , mediaNeg = 0;
	int num, cnt = 1, somaPos= 0, contPos = 0, somaNeg =0, contNeg = 0;
	
	while (cnt <= 5){
		
		printf("Entre com um valor;\n");
		scanf("%i", &num);
		
		if(num != 0){
			if(num > 0){
				contPos ++;
				somaPos += num;
			}
			else{
				contNeg ++;
				somaNeg += num;
			}
			cnt ++;
		}
		else 
			printf("O número 0 é nulo.");
	}
	
	if(contPos > 0)
		mediaPos = (float) somaPos / (float) contPos;
	
	if (contNeg > 0)
		mediaNeg = (float) somaNeg / (float) contNeg;
		
	printf("A média dos valores Positivos é %.2f\n", mediaPos);
	printf("A média dos valores Negativos é %.2f\n", mediaNeg);
}
