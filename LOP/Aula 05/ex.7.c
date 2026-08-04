#include <stdio.h>
void main (){
	float a, b, c, d;
	printf ("Informe quantos caminhoes a fazenda possui:\n");
	scanf ("%f", &a);
	printf ("Agora, informe quantos alqueires a fazenda possui:\n");
	scanf ("%f", &b);
	
	c =  (b * 250) / (a * 18);
	
	printf ("Será necessário aproximadamente %.0f viagens para levar todo o lote de laranjas", c);
	getch();
	
}