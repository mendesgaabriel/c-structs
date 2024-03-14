//referência: https://youtu.be/GVf7y-Z5DkE
#include <stdio.h>
//Structs e Funções * CÓDIGO DO VÍDEO CORRIGIDO POR AI *

// Structs e Funções
struct Data {
    int dia, mes, ano;
};

// Declaração da função leData() antes de sua referência
struct Data leData();

// Função principal
int main() {
    struct Data dt;
    dt = leData();
    escreveData(dt);
    return 0;
}

// Definição da função escreveData()
void escreveData(struct Data dta) {
    printf("%d/%d/%d\n", dta.dia, dta.mes, dta.ano);
}

// Definição da função leData()
struct Data leData() {
    struct Data d;
    
    printf("Escreva o dia, mes e ano (separado por espaços): ");
    scanf("%d %d %d", &d.dia, &d.mes, &d.ano);
    return d;
}

