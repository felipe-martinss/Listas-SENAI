#include <stdio.h>
void main(){
	float a, b, c, d;
	printf ("Digite o valor da compra: \n");
	scanf ("%f", &a);
	if (a > 500){
		b = (a * 10)/100;
		c = a - b;
		printf ("O valor final é %.2f", c);
	}
	else if (a > 200 && a<=500){
		b = (a * 5)/100;
		c = a - b;
		printf ("O valor final é %.2f", c);
	}
	else{
		printf ("O valor final continua %.2f", a);
	}
	getch();
}