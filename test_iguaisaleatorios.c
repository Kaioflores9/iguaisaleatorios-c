#include <assert.h>
#include <stdio.h>
#include "function_numero_aleatorio.c"

int main(void)
{
    int numero = numero_aleatorio();
    assert(numero > 0);
    printf("Teste executado com sucesso");
}
