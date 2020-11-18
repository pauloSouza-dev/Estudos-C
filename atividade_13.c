#include <stdio.h>
#include <locale.h>
//atividade 13 completa

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char time1[20], time2[20];
	int gol1, gol2;
	
	printf("Digite o Nome do primeiro time e a quantidade de Gols, respectivamente: \n");
	scanf("%s", &time1);
	scanf("%i", &gol1);
	
	printf("Digite o Nome do segundo time e a quantidade de Gols, respectivamente: \n");
	scanf("%s", &time2);
	scanf("%i", &gol2);
	
	if(gol1 > gol2)
		printf("O vencedor foi o time %s", time1);
	else if(gol1 == gol2)
		printf("A partida terminou em Empate!");
	else 
		printf("O vencedor foi o time %s", time2);
	
}
