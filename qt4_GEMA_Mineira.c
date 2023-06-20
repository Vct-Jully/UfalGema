#include <stdio.h>
#include <stdlib.h>
int main(){
    int a, l, tamanhoPista=0;
    scanf("%d %d", &a, &l);
    int pista[a][l];
    for(int i=0;i<a;i++){
        for(int d=0;d<l;d++){
            scanf("%d", &pista[i][d]);
        }
    }
    for(int i=0;i<a;i++){
        for(int d=0;d<l;d++){
            int diferencaH=abs(d==(l-2)?(pista[i][d-1])-pista[i][d]:
            (pista[i][d+1])-pista[i][d]);
            if(diferencaH==0 || diferencaH==1 || pista[i][d]==pista[i][d+1] 
            || pista[i][d]==pista[i][d-1]){
                tamanhoPista++;
            }
        }
    } 
    printf("%d",tamanhoPista);
    return 0;
}