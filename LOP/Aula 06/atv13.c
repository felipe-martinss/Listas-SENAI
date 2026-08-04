#include <stdio.h>
void main (){
	float a, b, c, d, m;
	printf ("Digite as suas 3 notas: \n(ex: 10,9,8)\n");
	scanf ("%f, %f, %f", &a, &b, &c);
	
	d = a + b + c;
	m = d / 3;
	
	if(m>=7){
		printf ("Aprovado");
	}
	else if (m>=5 && m<7){
		printf ("Recuperação");
	}
	else{
		printf ("Reprovado");
	}
	getch();
}