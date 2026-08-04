#include<stdio.h>
void main(){
	float a, b, c;
	printf ("Digite sua idade: \n");
	scanf ("%f", &a);
	if (a>18){
		printf ("Maior de idade");
	}
	else{
		printf ("Menor de idade");
	}
	getch();
}