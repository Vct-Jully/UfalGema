#include <math.h>
#include <stdio.h>
#define PI 3.14159

int main(void) {
  double areaTsecao, areaCsecao, areaC, areaTotalI, cosSec, raio;

  printf("insira o valor do raio\n");
  scanf("%2lf", &raio);
  printf("valor do raio:%2lf\n", raio);

  areaC = PI * pow(raio, 2); // área do círculo
  printf("areaC:%2lf\n", areaC);
  cosSec = 74;
  areaCsecao = (areaC / 360) * cosSec; // área em medida do cos da seção

  double ladoD, ladoE, ladoF, ladoHalt; // variáveis da seção triangular

  ladoD = (raio * sin(106)) / sin(37); // lei dos senos
  ladoE = raio;
  ladoF = ladoE;
  ladoHalt =
      sqrt((pow(ladoE, 2)) + (pow((ladoD / 2), 2))); // teorema de pitágoras

  printf("ladoD:%2lf\n", ladoD);
  areaTsecao = (ladoD * ladoHalt) / 2; // área do triângulo isósceles

  printf("área da seção Triangular:%2lf\n", areaTsecao);
  printf("área da seção Circular:%2lf\n", areaCsecao);

  areaTotalI = areaTsecao + areaCsecao;
  printf("área de Intersceção:%2lf\n", areaTotalI);

  return 0;
}
