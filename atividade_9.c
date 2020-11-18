#include <stdio.h>
#include <locale.h>
//atividade 9 completa

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	float salBase, salReceber, grat, imp;
	
	scanf("%f", &salBase);
	grat = (salBase * 5) / 100;
	salReceber = salBase + grat - imp;
	imp = (salReceber * 7) / 100;
	salReceber = salReceber - imp;
	
	printf("%f", salReceber);
}
