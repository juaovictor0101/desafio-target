#include <stdio.h>

int main() {
    int INDICE=12;
    int soma=0;
    int k=1;
    
    while (k<INDICE){
        k=k+1;
        soma=soma+k;
    }
    printf("O valor de soma é: %d/", soma);

    return 0;
}