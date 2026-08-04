#include <stdio.h>
void main (){
	char nome[100];
	float a, b, c;
	printf ("Digite o nome do time:\n");
	scanf ("%[^\n]", &nome);
	fflush (stdin);
	printf ("Digite quantas vitórias o time tem:\n");
	scanf ("%f", &a);
	printf ("Agora digite quantos empates o time tem:\n");
	scanf ("%f", &b);
	
	c = (a * 3) + b;
	
	printf ("O time %s, tem um total de %.0f pontos", nome, c);
	getch();
}