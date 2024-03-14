//referência: https://youtu.be/qYdTBY5gFhw
#include <stdio.h>
//TYPEDEF (usado para definir um novo tipo de dado)

/* Exemplo:
typedef int INTEIRO;
int main(){
INTEIRO i; // INTEIRO equivalente ao INT;

} */

//1° forma:
struct data{
	int dia, mes, ano;
};

typedef struct data Data;
int main(){
	Data dtaNasc;
}


//2° forma:
typedef struct{
	int dia, mes, ano;
}Data;

int main(){
	Data dtaNasc;
}



