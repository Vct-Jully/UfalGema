#include <stdio.h>

int main () {
  int N, posicao=2, deOnde, praOnde;

  scanf("%d", &N);
  
  for(int i=0; i < N; i++){
    scanf("%d %d", &deOnde, &praOnde);

    if(deOnde==posicao){
      posicao=praOnde;
    }else if(praOnde==posicao){
      posicao=deOnde;
    }
  }
  
  printf("%d", posicao);

  return 0;
}
