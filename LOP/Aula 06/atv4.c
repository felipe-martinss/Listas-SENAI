#include <stdio.h>
void main (){
	int a, b, c;
	printf ("Digite um numero inteiro: \n");
	scanf ("%d", &a);
	printf ("Digite outro numero inteiro: \n");
	scanf ("%d", &b);
	if (a>b){
		printf ("%d é maior que %d", a, b);
	}
	else if (a==b){
		printf ("Os numeros sao iguais");
	}
	else {
		printf ("%d é maior que %d", b, a);
	}
	getch();
}