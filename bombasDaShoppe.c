#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int d;
    scanf("%d", &d);
    double preco[4], beneficio[]={75,50,25,50}, media=0;
    for(int i=0;i<4;i++){
        scanf("%lf", &preco[i]);
        media += beneficio[i]/preco[i];
    }
    media /= 4;
    for(int i=0;i<4;i++){
        printf("%s\n", preco[i] > d ? "foi de comes" : beneficio[i]/preco[i] >= media ? "eh dento" : "EH BOMBA TORRESMO");
    }
    return 0;
}