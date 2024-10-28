#include <stdio.h>
#include "nascimento.h"

int main() {
    
    data_t nascimento = {15, 10, 1990}; 
    int dias = dias_de_vida(nascimento);
    printf("Dias de vida: %d\n", dias);
    return 0;
}
