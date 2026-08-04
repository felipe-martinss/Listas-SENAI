#include <stdio.h>
void main (){
	float d, r, h, area, volume;
	printf ("Informe o diametro do cilindro:\n");
	scanf ("%f", &d);
	printf ("Informe a altura do cilindro:\n");
	scanf ("%f", &h);
	
	r=d/2;
	area = 2*3.14*r*(h+r);
	volume = 3.14*(r*r)*h;	
	
	printf ("A area do cilindro tem o valor de:\n%.2f\n", area);
	printf ("O volume tem o valor de:\n%.2f", volume);
	getch();
}