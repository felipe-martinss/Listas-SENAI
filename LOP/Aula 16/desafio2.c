#include <stdio.h>
#include <windows.h>

struct Cliente{
	char nome[50];
	int idade;
	char sexo[5];
};

void main (){
	SetConsoleOutputCP(CP_UTF8);
	struct Cliente clientes[7] = {
		{"João da Silva",30,"M"},
		{"Maria de Oliveira",25,"F"},
		{"Pedro Santos",35,"M"},
		{"Ana Costa",28,"F"},
		{"Carlos Lima",40,"M"},
		{"Maria Lima",40,"F"},
		{"Irene Lima",40,"F"},
	};
	FILE *arquivo = fopen("clientes.csv", "w");
	if(arquivo == NULL){
		printf("Erro ao gravar o arquivo.\n");
		getch();
		return 0;
	}
	fprintf(arquivo, "Nome,Idade,Sexo\n");
	for(int i = 0; i < 7; i++)
		fprintf(arquivo, "%s,%d,%s\n", clientes[i].nome, clientes[i].idade, clientes[i].sexo);
	fclose(arquivo);
	printf("Arquivo criado com sucesso.");
	getch();
}
