//refer�ncia: https://youtu.be/QuSHZ2IOYB4
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
	por refer�ncia, n�o podemos esquecer
	de colocar os par�nteses antes de acessar
	o seu campo. */
	} 
