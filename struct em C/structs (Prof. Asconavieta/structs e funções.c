//refer�ncia: https://youtu.be/GVf7y-Z5DkE
#include <stdio.h>
//Structs e Fun��es * C�DIGO DO V�DEO CORRIGIDO POR AI *

// Structs e Fun��es
struct Data {
    int dia, mes, ano;
};

// Declara��o da fun��o leData() antes de sua refer�ncia
struct Data leData();

// Fun��o principal
int main() {
    struct Data dt;
    dt = leData();
    escreveData(dt);
    return 0;
}

// Defini��o da fun��o escreveData()
void escreveData(struct Data dta) {
    printf("%d/%d/%d\n", dta.dia, dta.mes, dta.ano);
}

// Defini��o da fun��o leData()
struct Data leData() {
    struct Data d;
    
    printf("Escreva o dia, mes e ano (separado por espa�os): ");
    scanf("%d %d %d", &d.dia, &d.mes, &d.ano);
    return d;
}

