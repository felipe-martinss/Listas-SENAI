#include <stdio.h>
void main (){
	float a, b, c, d;
	printf ("Digite o seu salario atual: \n");
	scanf ("%f", &a);
	if (a<=1800){
		b = (a * 15)/100;
		c = a + b;
		printf ("Seu salario reajustado é de %.2f", c);
	}
	else{
		b = (a * 10)/100;
		c = a + b;
		printf ("Seu salario reajustado é de %.2f", c);
	}
	getch ();
	
}