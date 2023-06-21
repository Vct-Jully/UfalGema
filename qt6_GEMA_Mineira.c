#include <stdio.h>
#include <math.h>

int main(){
    double raio;
    scanf("%lf", &raio);
    double areaT, areaSetor, porcentagem=raio/2;
    areaT=((porcentagem*4)+(porcentagem*3)+(porcentagem*5))/2;
    areaSetor=(1.0/4.0)*3.14*pow(raio,2);
    printf("%lf\n",abs(areaT-areaSetor));
    return 0;
}