//referência: https://youtu.be/QuSHZ2IOYB4
#include <stdio.h>
#include <stdlib.h>
struct ponto{
	int x, y;
};

void atribui (struct ponto *p){
	(*p).x = 10;
	(*p).y = 20;
}

int main(){
	//Passando uma struct por referência
	struct ponto p1;
	atribui(&p1);
	printf("x = %d\n", p1.x);
	printf("y = %d\n", p1.y);
}
