//referência: https://youtu.be/qYdTBY5gFhw
#include <stdio.h>
//Vetor dentro de uma Estrutura.
struct Aluno{
	int matricula;
	int rg;
	float notas[3];
};

int main(){
	struct Aluno alu;
	
	printf("Digite a matrícula do aluno e RG: ");
	scanf("%d", &alu.matricula);
	scanf("%d", &alu.rg);
	
	int i;
	printf("Digite as notas do aluno: ");
	for(i=0; i<=2; i++){
		scanf("%f", &alu.notas[i]);
	}
	
}
