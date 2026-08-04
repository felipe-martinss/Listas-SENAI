#include <stdio.h>
void main (){
	char mercadoria[100]; 
	float a, c;
	printf ("Digite o nome da mercadoria:\n");
	scanf (" %[^\n]", &mercadoria);
	fflush (stdin);
	printf ("Digite o preço atual da mercadoria:\n");
	scanf ("%f", &a);
	
	c = (a * 5 / 100) + a;
	
	printf ("O preço do %s com o reajuste ficou %.2f", mercadoria, c);
	getch();
}