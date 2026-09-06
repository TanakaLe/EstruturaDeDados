#include <stdio.h>
/* Imprima a string em ordem inversa sem criar outra string. A função deve chamar recursivamente o sufixo antes de imprimir o caractere atual.
Entrada - A entrada contém uma string ASCII sem espaços, com 1 a 1000 caracteres.
Saída - Imprima a string invertida e uma quebra de linha.
Dica - Ao imprimir depois da chamada, a pilha é desempilhada na ordem inversa.  */

void inverte_string(char v[], int indice){
    if (v[indice]=='\0'){
        return;
    }
    else{
        inverte_string(v, indice+1);        // processa tudo
        printf("%c", v[indice]);            // imprime o atual
    }
}

int main() {
    
    char inicial[10001];
    
    scanf("%s", inicial);
    
    inverte_string(inicial, 0);
    
    printf("\n");
    
    return 0;
}
