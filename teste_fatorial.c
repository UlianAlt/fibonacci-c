#include "function_fatorial.c"
#include <stdio.h>
#include <assert.h>

int main(int argc, char const *argv[])
{
	assert(fatorar(0) == 1 && fatorar(1) == 1 && fatorar(6) == 720);
	printf("Teste concluido com sucesso");
	return 0;
}
