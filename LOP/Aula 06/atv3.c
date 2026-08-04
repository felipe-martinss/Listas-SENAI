#include<stdio.h>
void main(){
	float a, b, c, d;
	printf ("Digite o numero de provas aplicadas na etapa: \n");
	scanf ("%f", &a);
	printf ("Agora digite a soma das notas: \n");
	scanf ("%f", &b);
	
	c = b / a;
	
	if (c<7){
		printf ("Reprovado");
	}
	else{
		printf ("Aprovado");
	}
	getch();
}