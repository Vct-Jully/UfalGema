#include <stdio.h>
int main(){
    int n, distancia, RGB[n][3], dr=0, db=0, dg=0;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d %d %d", &RGB[i][0], &RGB[i][1], &RGB[i][2]);
        dr-=RGB[i][0];
        dg-=RGB[i][1];
        db-=RGB[i][2];
    }
    dr=dr<0?-dr:dr;
    db=db<0?-db:db;
    dg=dg<0?-dg:dg;
    distancia=dr+db+dg;
    return 0;
}