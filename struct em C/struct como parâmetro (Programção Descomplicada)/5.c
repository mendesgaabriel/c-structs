//referência: https://youtu.be/QuSHZ2IOYB4
#include <stdio.h>
#include <stdlib.h>
struct ponto{
	int x, y;
};

void atribui(struct ponto *p){
	(*p).x = 10; //certo
	*p.x = 10; //errado
	*(p.x) = 10; //errado
}

int main(){
	/* Ao acessar uma estrutura passada
	por referência, não podemos esquecer
	de colocar os parênteses antes de acessar
	o seu campo. */
	} 
