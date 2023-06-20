#include <stdio.h>
int main(){
    int n,deOnde,praOnde, posicao=2;
    scanf("%d\n", &n);
    for(int i=0;i<n;i++){
        scanf("%d %d", &deOnde, &praOnde);
        if(deOnde==posicao){
            posicao=praOnde;
        }else if(praOnde==posicao){
            posicao=deOnde;
        }
    }
    
    /*int n, posicao=2;
    scanf("%d\n", &n);
    while(n--){
        int deOnde, praOnde;
        scanf("%d %d", &deOnde, &praOnde);
        posicao = (deOnde==posicao) ? praOnde : (praOnde==posicao) ? deOnde: posicao;
    }*/
    printf("%d\n", posicao);
 
    return 0;
}