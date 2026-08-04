#include <stdio.h>
#include <string.h>
void main(){
	char turno[100];
	printf ("Digite o seu turno (matutino, vespertino ou noturno): \n");
	scanf ("%s", &turno);
	
	if (strcmp(turno, "matutino") == 0){
		printf ("Bom dia!");
	}else if (strcmp(turno, "vespertino") == 0){
		printf ("Boa tarde!");
	}else if (strcmp(turno, "noturno") == 0){
		printf ("Boa noite!");
	}else{
		printf ("Turno invalido.");
	}
	getch();
}