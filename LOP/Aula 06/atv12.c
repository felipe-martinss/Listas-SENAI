#include <stdio.h>
void main (){
	float a,b,c;
	printf ("Digite o seu ano de nascimento: \n");
	scanf ("%f", &a);
	printf ("Informe o ano em que estamos: \n");
	scanf ("%f", &b);
	
	c = b-a;
	
	if (c>=16){
		printf ("Voce ja tem %.0f anos, pode votar", c);
	}
	else{
		printf ("Voce ainda tem %.0f anos, portanto ainda nao pode votar", c);
	}
	getch();
}