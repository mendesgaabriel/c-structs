//referência: https://youtu.be/qYdTBY5gFhw
#include <stdio.h>
//Vetor de Estruturas

struct Data{
	int dia, mes, ano;
};

struct Aluno{
	int matricula;
	int rg;
	struct Data dtaNasc;
	float notas[3];
};

int main(){
	int i, j;
	struct Aluno vet[5];
	for(i=0; i<=4; i++){
		printf("Matricula aluno %d: ", i);
		scanf("%d", &vet[i].matricula);
		
		printf("RG aluno %d: ", i);
		scanf("%d", &vet[i].rg);
		
		printf("Dia de nascimento aluno %d: ", i);
		scanf("%d", &vet[i].dtaNasc.dia);
		
		printf("Mês de nascimento aluno %d: ", i);
		scanf("%d", &vet[i].dtaNasc.mes);
		
		printf("Ano de nascimento aluno %d: ", i);
		scanf("%d", &vet[i].dtaNasc.ano);
			for(j=0; j<=2; j++){
				printf("Aluno %d, nota %d: ", i, j);
				scanf("%f", &vet[i].notas[j]);
			}
	}
}
