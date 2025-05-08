#include <stdio.h>

void moverTorre(int contadorTorre){
    if (contadorTorre > 0) {
        printf("Direita\n");
        moverTorre(contadorTorre -1);
    }
}


void moverBispo(int contadorBispo){
    for (contadorBispo ; contadorBispo > 0 ; contadorBispo--){
        printf("Cima, ");
        for ( int i = 1; i >= 1; i--) {
            printf("Direita\n");
        }   
    }
}


void moverRainha(int contadorRainha){
    if (contadorRainha > 0) {
        printf("Esquerda\n");
        moverRainha(contadorRainha -1);
    }
}

void moverCavalo(int contadorCavalo){
    while (contadorCavalo--){
        
        for (int i = 0; i < 2; i++) {
            printf("Cima\n");
        }
        printf("Direita\n");
        
    }
}

int main() {
    printf("\nMovimento Torre\n");
    moverTorre(5);
    printf("\nMovimento Bispo\n");
    moverBispo(5);
    printf("\nMovimento Rainha\n");
    moverRainha(8);
    printf("\nMovimento Cavalo\n");
    moverCavalo(1);
    
    return 0;
}