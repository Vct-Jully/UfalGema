#include <stdio.h>
int main() {
    int i=0, busca, entrada[1000], vezesA=0;
    while(i!=-1){
        int total=0;
        if(vezesA==1000){
            //vezesA++;
            scanf("%d", &busca);
            while(vezesA--){
                if(busca==entrada[vezesA]){
                    total++;
                }
            }
            printf("%d appeared %d times\n",busca, total);
            vezesA++;
        }
        scanf("%d", &i);
        entrada[vezesA]=i;
        vezesA++;
    }
	return 0;
}