//refer�ncia: https://youtu.be/qYdTBY5gFhw
#include <stdio.h>

//Atribui��o de Estruturas.

struct Data{
	int dia, mes, ano;
};

int main(){
	
	struct Data dta, dtb;
	
	printf("Digite o dia: ");
	scanf("%d", &dta.dia);
	
	printf("Digite o m�s: ");
	scanf("%d", &dta.mes);
	
	printf("Digite o ano: ");
	scanf("%d", &dta.ano);
	
	dtb = dta; // atribuindo os valores de dta � dtb;
	
	printf("%d/%d/%d\n", dtb.dia, dtb.mes, dtb.ano);
	
}
