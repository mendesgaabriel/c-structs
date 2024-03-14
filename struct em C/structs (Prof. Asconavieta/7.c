//referência: https://youtu.be/qYdTBY5gFhw
#include <stdio.h>

//Atribuição de Estruturas.

struct Data{
	int dia, mes, ano;
};

int main(){
	
	struct Data dta, dtb;
	
	printf("Digite o dia: ");
	scanf("%d", &dta.dia);
	
	printf("Digite o mês: ");
	scanf("%d", &dta.mes);
	
	printf("Digite o ano: ");
	scanf("%d", &dta.ano);
	
	dtb = dta; // atribuindo os valores de dta à dtb;
	
	printf("%d/%d/%d\n", dtb.dia, dtb.mes, dtb.ano);
	
}
