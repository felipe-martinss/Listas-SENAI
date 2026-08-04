#include <stdio.h>
void main(){
	float p, a, b;
	char nome[100];
	printf ("Digite o nome do time: \n");
	scanf (" %[^\n]", &nome);
	printf ("Agora digite o numero de pontos do time %s tem: \n", nome);
	scanf ("%f", &p);
	if (p>=20){
		printf ("O time %s está classificado", nome);
	}
	else if (p>=10 && p<20){
		printf ("O time %s está em disputa", nome);
	}
	else{
		printf ("O time %s está eliminado", nome);
	}
	getch();
}