#include <stdio.h>
#include <locale.h>
//atividade 15 completa

int main(){
	setlocale(LC_ALL, "Portguese");
	
	int idade;
	
	printf("Entre com a idade do nadador: \n");
	scanf("%i", &idade);
	
	if (idade >= 5 && idade <= 12)
		printf("INFANTIL");
	else if (idade >= 13 && idade <= 17)
		printf("JUVENIL");
	else if (idade >= 18 && idade <=25)
		printf("PROFISSIONAL");
	else
		printf("FORA DA FAIXA");
}
