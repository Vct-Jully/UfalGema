#include <stdio.h>
int main(){
    int posicaoX,distanciasUm,distanciaDois,distanciaTres,distanciaQuatro;
    scanf("%d %d %d %d", &distanciasUm, &distanciaDois, &distanciaTres, &distanciaQuatro);
    if(distanciasUm==distanciaDois && distanciaTres==2){
        printf("1");
    }else if(distanciasUm==distanciaDois==distanciaTres){
        printf("2");
    }else if(distanciaDois==distanciaTres==distanciaQuatro){
        printf("3");
    }else{
        printf("4");
    }
    return 0;
}