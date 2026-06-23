int main(void)
{
    int numero = numero_aleatorio();

    printf("Numero gerado: %d\n", numero);

    assert(numero > 0);

    printf("Teste executado com sucesso\n");

    return 0;
}
