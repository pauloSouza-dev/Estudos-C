#include <stdio.h>
#include <locale.h>
//atividade 18 completa

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int idade;
	
	printf("Digite sua idade\n");
	scanf("%i", &idade);
	
	if(idade < 16)
		printf("N�o eleitor");
	else if(idade >= 18 && idade <= 65)
		printf("Eleitor Obrigat�rio");
	else
		printf("eleitor facultativo");
}
