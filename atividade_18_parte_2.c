#include <stdio.h>
#include <locale.h>
//atividade 18 part 2 completa

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int a, b, c;
	
	printf("Digite dois valores: \n");
	scanf("%i%i", &a, &b);
	
	if(a == b)
		c = a + b;
	else
		c = a * b;
	
	printf("Valores %i , %i resultado %i", a, b, c);
		
}
