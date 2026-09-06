#include <stdio.h>
/*  Some os elementos m[i][c-1-i] enquanto os dois índices forem válidos.
A matriz é armazenada estaticamente e o processamento recursivo deve visitar apenas posições válidas.
Entrada - A primeira linha contém l e c, com 1 ≤ l,c ≤ 30. As próximas l linhas contêm c inteiros cada.
Saída - Imprima o resultado em uma linha.
Dica - Modele o percurso da estrutura bidimensional por um estado que avance sem repetir posições. */

int somar_diagonal(int matriz[][30], int l, int c, int i){
    if(i==l || i==c){
        return 0;
    }
    else{
        return matriz[i][c-1-i] + somar_diagonal(matriz, l, c, i+1);
    }
}

int main() {
    
    int l, c;
    int matriz[30][30];
    
    scanf("%d %d", &l, &c);
    
    for(int i=0; i<l; i++){
        for(int j=0; j<c; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    
    int resultado = somar_diagonal(matriz, l, c, 0);
    
    printf("%d\n", resultado);
    
    return 0;
}
