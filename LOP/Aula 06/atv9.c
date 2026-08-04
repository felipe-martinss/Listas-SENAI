#include <stdio.h>
void main(){
	int a, b, c;
	printf ("Digite um numero inteiro: \n");
	scanf ("%d", &a);
	if (a > 100){
		printf ("O valor (%d) é maior que 100", a);
	}
	else{
		printf ("O valor (%d) é menor que 100", a);
	}
	getch();
}