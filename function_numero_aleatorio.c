#include <stdlib.h>
#include <time.h>

int main(void)
{

int numero_aleatorio()
{
    srand(time(NULL));
    return 1 + rand() % 1000;
}
}
