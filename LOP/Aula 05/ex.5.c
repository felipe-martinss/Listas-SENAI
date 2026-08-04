#include <stdio.h>
void main (){
	float n, n1, n2;
	printf ("Digite um numero inteiro:\n");
	scanf ("%f", &n);
	if (n<=0){
		printf ("Numero invalido");
	}
	else {
	n1 = n - 1;
	n2 = n + 1;
	
	printf ("O numero anterior de %.2f é %.2f, ja o seguinte é %.2f", n, n1, n2);
	}
	getch ();
}
