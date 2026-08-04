#include <stdio.h>
void main (){
	char nome[100];
	float a, b, c;
	printf ("Digite o seu nome:\n");
	scanf (" %s", &nome);
	fflush(stdin);
	printf ("Digite o seu salário atual:\n");
	scanf ("%f", &a);
	printf ("Agora, digite a porcentagem de reajuste:\n");
	scanf ("%f", &b);
	
	c = (a * b / 100) + a;
	
	printf ("%s, seu salário atual é de: \n%.2f", nome, c);
	getch();
}