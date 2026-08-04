#include<stdio.h>
void main(){
	int n;
	printf ("Digite um numero inteiro: \n");
	scanf ("%d", &n);
	if ( n < 0){
		printf ("Numero negativo");
	}
	else {
		printf ("Numero positivo");
	}
	
	getch();
}
