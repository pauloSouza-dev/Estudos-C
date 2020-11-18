#include <stdio.h>
#include <locale.h>
//atividade 6 completa

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int distancia, volume, consumo_medio;
	
	printf("Qual a distância percorrida no trajeto? \n");
	scanf("%i", &distancia);
	printf("Qual a quantidade em litros de gasolina consumido?\n");
	scanf("%i", &volume);
	
	consumo_medio = distancia / volume;
	
	printf("O consumo médio do carro é de %i km/l !", consumo_medio);
}
