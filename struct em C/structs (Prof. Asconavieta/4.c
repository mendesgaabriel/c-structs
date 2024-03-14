//referência: https://youtu.be/qYdTBY5gFhw
#include <stdio.h>
// Estruturas aninhadas (uma estrutura dentro da outra)
struct Data{
	int dia, mes, ano;
};

struct Funcionario{
	int codigo;
	float salario;
	struct Data dtaNasc;
};

int main(){
	struct Funcionario func;
	scanf("%d", &func.codigo); //acessando atráves do ponto
	scanf("%f", &func.salario); //acessando atráves do ponto
	scanf("%d", &func.dtaNasc.dia); //acessando atráves do ponto
	scanf("%d", &func.dtaNasc.mes); //acessando atráves do ponto 
	scanf("%d", &func.dtaNasc.ano); //acessando atráves do ponto
	/* Similar a localização de alguma pasta, arquivo.
	Exemplo: D:\nvidia share\Desktop (a contrabarra seria o ponto)
}
