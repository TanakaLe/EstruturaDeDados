#include <stdio.h>

int somar_pares(int v[], int n){
    if (n==0){
       return 0; 
    }
    else if (v[n-1] % 2 == 0){          // par
        return v[n-1] + somar_pares(v, n-1);
    }
    else{                               
        return somar_pares(v, n-1);     // impar
    }
}

int main(){

    int n, v[1000], resultado;

    scanf("%d", &n);

    for (int i=0; i<n; i++){
        scanf("%d", &v[i]);
    }
    
    resultado = somar_pares(v, n)

    printf("%d", resultado);

    return 0;
}