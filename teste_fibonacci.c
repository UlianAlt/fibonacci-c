#include <stdio.h>
#include <assert.h>
#include "function_fibonacci.c"

int main(){
    assert(fibonacci(0) == 0 && fibonacci(1) == 1 && fibonacci(6) == 8 && fibonacci(9) == 34);
    printf("Teste concluido com sucesso");
	return 0;
}
