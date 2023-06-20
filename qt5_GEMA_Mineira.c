#include <stdio.h>
int main(){
    int qtnCriancas;
    scanf("%d", &qtnCriancas);
    int tamanho=(qtnCriancas-1), ondeParou, dedosJogados, totalDedos=0;
    for(int i=0;i<tamanho;i++){
        scanf("%d", &dedosJogados);
        totalDedos+=dedosJogados;
    }
    ondeParou=totalDedos%qtnCriancas;
    if(ondeParou<qtnCriancas){
        while(qtnCriancas--){
            printf("%d\n",qtnCriancas);
        }
    }
    return 0;
}