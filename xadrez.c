#include <stdio.h>

int main() {
    
    int contadorRainha = 1, contadorBispo, contadorTorre = 1, contadorCavalo = 1 ;

    printf("\nMovimento da Torre\n");
    while (contadorTorre <= 5){
        printf(" Direita\n");
        contadorTorre++;
    }
    printf("\nMovimento do Bispo\n");
    for (contadorBispo = 1; contadorBispo <= 5; contadorBispo++)
    {
        printf("Cima, Direita\n");
    }
    
   printf("\nMovimento da rainha\n");
    do
    {
        printf("Esquerda\n");
        contadorRainha++;
    } while ( contadorRainha <= 8);

    printf("\nMovimento do Cavalo\n");
    while (contadorCavalo--){
        
        for (int i = 0; i < 2; i++) {
            printf("baixo\n");
        }
        printf("esquerda");
        
    }
    
    
    return 0;
}