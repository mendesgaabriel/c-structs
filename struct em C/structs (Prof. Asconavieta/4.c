//refer�ncia: https://youtu.be/qYdTBY5gFhw
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
	scanf("%d", &func.codigo); //acessando atr�ves do ponto
	scanf("%f", &func.salario); //acessando atr�ves do ponto
	scanf("%d", &func.dtaNasc.dia); //acessando atr�ves do ponto
	scanf("%d", &func.dtaNasc.mes); //acessando atr�ves do ponto 
	scanf("%d", &func.dtaNasc.ano); //acessando atr�ves do ponto
	/* Similar a localiza��o de alguma pasta, arquivo.
	Exemplo: D:\nvidia share\Desktop (a contrabarra seria o ponto)
}
