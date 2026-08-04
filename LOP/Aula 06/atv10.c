#include <stdio.h>
void main(){
	float a, b, c;
	printf ("Digite sua idade: \n");
	scanf ("%f", &a);
	if (a<12){
		printf ("Voce é criança");
	}
	else if (a>=12 && a<18){
		printf ("Voce é adolescente");
	}
	else{
		printf ("Voce é adulto");
	}
	getch();
}