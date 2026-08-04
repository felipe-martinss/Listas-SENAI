#include <stdio.h>
void main (){
	int a, b, c, d;
	printf ("Informe quantos caminhoes a fazenda possui:\n");
	scanf ("%d", &a);
	printf ("Agora, informe quantos alqueires a fazenda possui:\n");
	scanf ("%d", &b);
	
	c =  (b * 250) / (a * 18);
	if (c<=c.4){
		d = c-1;
		printf ("Será necessário aproximadamente %.0f viagens para levar todo o lote de laranjas", c);
	}
	else {
	printf ("Será necessário aproximadamente %.0f viagens para levar todo o lote de laranjas", c);
	}
	getch();
	
}