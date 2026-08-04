	#include <stdio.h>
	void main (){
		float a, b, c, d;
		printf ("Digite um numero:\n");
		scanf ("%f", &a);
		printf ("Digite outro numero:\n");
		scanf ("%f", &b);
		printf ("Agora, digite um terceiro numero para a divisao:\n");
		scanf ("%f", &c);
		
		d = (a + b) / c;
		
		printf ("O resultado é:\n%.2f", d);
		getch ();
	}