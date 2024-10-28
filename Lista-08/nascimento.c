#include <stdio.h>
#include <time.h>
#include "nascimento.h"

int dias_de_vida(data_t nasc) {
    
    time_t t = time(NULL);
    struct tm *atual = localtime(&t);

    struct tm nascimento = {0};
    nascimento.tm_year = nasc.ano - 1900; 
    nascimento.tm_mon = nasc.mes - 1;      
    nascimento.tm_mday = nasc.dia;

    time_t nascimento_time = mktime(&nascimento);
    time_t atual_time = mktime(atual);

    double segundos = difftime(atual_time, nascimento_time);
    int dias = segundos / (60 * 60 * 24);

    return dias;
}
