//refer�ncia: https://youtu.be/SXOlaD375yk
#include <stdio.h>

struct Data{
	int dia, mes, ano;
};

int main(){
	struct Data dt;
	
	printf("Informe o dia: ");
	scanf("%d", &dt.dia);
	
	printf("Informe o m�s: ");
	scanf("%d", &dt.mes);
	
	printf("Informe o ano: ");
	scanf("%d", &dt.ano);
	
	if(dt.dia == 7 && dt.mes == 9){
		printf("Dia da independ�ncia.\n");
	}
	else{
		printf("Sem comemora��o.\n");
	}
	printf("Data digitada: %d/%d/%d\n", dt.dia, dt.mes, dt.ano);
}
