#include <stdio.h>
void main(){
	int a, b, c;
	printf ("Digite um numero inteiro: \n");
	scanf ("%d", &a);
	printf ("Digite o segundo numero inteiro: \n");
	scanf ("%d", &b);
	printf ("Digite o terceiro numero inteiro: \n");
	scanf ("%d", &c);
	if (a>b && a>c){
		printf ("O primeiro numero (%d) é o maior dentre os 3", a);
	}
	else if (b>a && b>c){
		printf ("O segundo numero (%d) é o maior dentre os 3", b);
	}
	else if (c>a && c>b){
		printf ("O terceiro numero (%d) é o maior dentre os 3", c);
	}
	getch ();
}