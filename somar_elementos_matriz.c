#include <stdio.h>
/*  Calcule a soma de todos os elementos da matriz. 
    A matriz é armazenada estaticamente e o processamento recursivo deve visitar apenas posições válidas.
Entrada - A primeira linha contém l e c, com 1 ≤ l,c ≤ 30. As próximas l linhas contêm c inteiros cada.
Saída - Imprima o resultado em uma linha.
Dica - Converta um índice linear k na posição k/c, k%c.     */

int somar_matriz(int matriz[][30], int num_linhas, int num_colunas, int linha_atual, int coluna_atual){
    if (linha_atual == num_linhas){
        return 0;
    }
    else if (coluna_atual == num_colunas){
        return somar_matriz(matriz, num_linhas, num_colunas, linha_atual+1, 0);      //vai pra proxima linha começando da coluna 0
    }
    else{
        return matriz[linha_atual][coluna_atual] + somar_matriz(matriz, num_linhas, num_colunas, linha_atual, coluna_atual+1);
    }
}

int main() {
    
    int num_linhas, num_colunas;
    int matriz[30][30];
    
    scanf("%d %d", &num_linhas, &num_colunas);
    
    for(int i=0; i<num_linhas; i++){
        for(int j=0; j<num_colunas; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    
    int resultado = somar_matriz(matriz, num_linhas, num_colunas, 0, 0);
    
    printf("%d\n", resultado);
    
    return 0;
}
