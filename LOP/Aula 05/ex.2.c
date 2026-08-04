#include <stdio.h>
void main (){
	float v, d, t;
	printf ("Informe a distancia a ser percorrida em km:\n");
	scanf ("%f", &d);
	printf ("Informe a velocidade do carro em km/h:\n");
	scanf ("%f", &v);
	
	t = d / v;
	
	printf ("O carro irá percorrer %.0fkm em %.2f horas",d, t);
	getch ();
}