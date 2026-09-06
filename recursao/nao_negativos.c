#include <stdio.h>
/*Verifique recursivamente se todos os elementos de um vetor são maiores ou iguais a zero.

Entrada - A primeira linha contém n (1 ≤ n ≤ 1000) e a segunda contém n inteiros.
Saída - Imprima sim se todos forem não negativos; caso contrário, imprima nao.
Dica - Uma única violação permite encerrar a verificação.*/

int nao_negativos(int v[], int n){
    if(n == 0){
        return 1;       // passou por todos e nenhum deu problema (todos > ou = 0)
    }
    else if (v[n-1] < 0){
        return 0;
    }
    else{
        return nao_negativos(v, n-1);
    }
}

int main() {
    
    int n, v[1000];
    
    scanf("%d", &n);
    
    for(int i=0; i<n; i++){
        scanf("%d", &v[i]);
    }
    
    if (nao_negativos(v, n) == 0){
        printf("nao");
    }
    else{
        printf("sim");        
    }

    return 0;
}
