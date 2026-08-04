#include <stdio.h>
void main (){
	char cidade;
	float e, v, p;
	printf ("Informe o nome da cidade:\n");
	scanf ("%[^\n]", &cidade);
	printf ("Informe o numero total de candidatos da ultima eleição:\n");
	scanf ("%f", &e);
	printf ("Informe o numero total de votos apurados da ultima eleição:\n");
	scanf ("%f", &v);
	
	p =  (v * 100) / e;
	
	printf ("A porcentagem de participação é:\n%.2f", p);
	getch();
	}