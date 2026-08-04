#include <stdio.h>
void main (){
	float a, b, c;
	printf ("Informe a distancia a ser percorrida em km:\n");
	scanf ("%f", &a);
	
	b = a / 900;
	
	printf ("O 747-300 irá percorrer %.0fkm em %.2fh", a, b);
	getch();
}