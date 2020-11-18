#include <stdio.h>
#include <locale.h>
//Atividade 3 completa

float main(){
	setlocale(LC_ALL, "Portuguese");
	
	float n1, n2, n3, media, media_total;
	
	printf("A seguir digite as 3 notas do aluno \n");
	scanf("%f", &n1);
	scanf("%f", &n2);
	scanf("%f", &n3);
	
	media = n1 + n2 + n3;
	media_total = media / 3 ;
	printf("A média do aluno é %0.2f \n", media_total);
}
