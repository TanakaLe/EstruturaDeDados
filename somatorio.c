#include <stdio.h>

int somatorio1(int x){

    if(x==0){    //caso base
        return 0;
    }
    else{       //caso geral
        return x + somatorio1(x-1);
    } 
}

int somatorio2(int v[], int n){
    if(n==0){
        return 0;
    }else{
        return v[n-1] + somatorio2(v, n-1);
    }   
}

int main(){
    int x;
    printf("Digite um valor para somar de 1 ate ele: ");
    scanf("%d", &x);
    printf("somatorio1(%d) = %d\n", x, somatorio1(x));

    int n;
    printf("Quantos elementos tem o vetor? ");
    scanf("%d", &n);

    int v[n];
    printf("Digite os %d elementos:\n", n);
    for(int i = 0; i < n; i++){
        scanf("%d", &v[i]);
    }

    printf("somatorio2 = %d\n", somatorio2(v, n));

    return 0;
}