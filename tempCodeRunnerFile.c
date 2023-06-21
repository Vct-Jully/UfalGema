#include <stdio.h>
int main() {
    int i=0, busca, vezesA=0, total=0;
    while(i!=-1){
        if(vezesA==21){
            printf("%d aparece %d vezes\n",busca, total);
            total=0;
        }
        scanf("%d", &i);
        if(vezesA==0){
            busca=i;
        }
        if(busca==i){
            total++;
        }
        vezesA++;
    }
	return 0;
}