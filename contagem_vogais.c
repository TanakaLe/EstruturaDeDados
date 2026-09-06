#include <stdio.h>
#include <ctype.h>
/*Conte as vogais a, e, i, o, u, ignorando maiúsculas e minúsculas.
A cada chamada, avance ou reduza um índice até alcançar o terminador \0 ou o limite definido.

Entrada - A entrada contém uma string ASCII sem espaços, com 1 a 1000 caracteres.
Saída - Imprima o resultado em uma linha.
Dica - Normalize somente o caractere atual com tolower e some 0 ou 1.*/

int contador_vogais(char v[], int indice){
    if (v[indice] == '\0'){
        return 0;
    }
    else{
        char c = tolower(v[indice]);
        int atual;
        if (c =='a' || c =='e' || c =='i' || c =='o' || c =='u'){
            atual = 1;
        }else{
            atual = 0;
        }
        return atual + contador_vogais(v, indice+1);    // +1 até achar o \0 na string :)
    }
}

int main() {
    
    char v[1001];
    int resultado;
    
    scanf("%s", v);
    
    resultado = contador_vogais(v, 0);
    
    printf("%d", resultado);
    
    return 0;
}

