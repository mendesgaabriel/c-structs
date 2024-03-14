//referência: https://youtu.be/QuSHZ2IOYB4
#include <stdio.h>
#include <stdlib.h>
struct ponto{
	int x, y;
};

void soma_imprime_valor(int *n){
	*n = *n + 1;
	printf("Valor = %d\n", n);
}

int main(){
	//Passando um campo "Por Referência"
	struct ponto p1 = {10, 20};
	soma_imprime_valor(&p1.x);
	soma_imprime_valor(&p1.y);
}
