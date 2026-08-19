#include <stdio.h>
#include "function_fibonacci.c"
#include <stdlib.h>

int main(int argc, char *argv[]){
    FILE *arquivo = fopen("fibonacci.txt", "w");
    if(argc != 2){
        printf("digite o nome do programa seguido de 1 argumento (Fibonacci 6)");
		fprintf(arquivo, "digite o nome do programa seguido de 1 argumento (Fibonacci 6)");
    }else{
    	int input = atoi(argv[1]);
		printf("resultado: %d\n", fibonacci(input));
		fprintf(arquivo, "resultado: %d\n", fibonacci(input));
		printf("\nFeito por PedroUlian (https://github.com/PedroUlian) (https://github.com/UlianAlt)");
		fprintf(arquivo, "\nFeito por PedroUlian (https://github.com/PedroUlian) (https://github.com/UlianAlt)");
    }
}