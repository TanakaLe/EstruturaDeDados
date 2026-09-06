#include <stdio.h>

int fib(int n){

    if (n == 0){        // caso base 1
        return 0;
    }
    else if (n == 1){       // caso base 2
        return 1;
    }
    else{               // caso geral
        return fib(n-1) + fib(n-2);
    }
}

int main (){
    int n;
    printf("Digite um valor para calcular o fibonacci: ");
    scanf("%d", &n);

    printf("fib(%d) = %d\n", n, fib(n));

    return 0;
}