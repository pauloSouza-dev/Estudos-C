#include <stdio.h>
#include <locale.h>
//Atividade 4 completa

float main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float base_maior, base_menor, altura, processo, area;
	
	printf("Base maior do Trapézio:\n");
	scanf("%f", &base_maior);
	printf("Base menor do Trapézio:\n");
	scanf("%f", &base_menor);
	printf("Altura do trapézio:\n");
	scanf("%f", &altura);
	
	processo = (base_maior + base_menor) * altura;
	area = processo / 2;
	
	printf("A área total do trapézio é %0.2f ! \n", area);
}
