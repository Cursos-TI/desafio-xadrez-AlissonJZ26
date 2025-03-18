#include <stdio.h>

void movertorre(int casas){
    if(casas > 0){
        movertorre(casas - 1 );
        printf("%d\n", casas);
    }
}
int main(){
    int quantidade = 0;
    printf("5 casas para a direita\n");
    movertorre(quantidade);    
    return 0;
}
