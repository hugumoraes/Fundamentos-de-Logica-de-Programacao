// o erro é de execução porque a conversão de tipos no printf é possivel (ler um char e imprimeir como int e vice-versa
#include<stdio.h>
int main(){

    printf("%d %d %d\n", 7, 17, 1024);  //nao preenche
    printf("%3d %3d %3d\n", 7, 17, 1024);  //preenche com espaços
    printf("%03d %03d %03d\n", 7, 17, 1024);  //preenche com zeros
    printf("Fim do Programa!!!!");
    return 0;
}
