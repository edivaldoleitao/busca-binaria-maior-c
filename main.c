#include <stdio.h>
#include <stdlib.h>

int bb(int x, int e, int d, int v[]) {
   if (e == d - 1) 
      return v[e];  // Correção: retornar v[e] em vez de v[d]

   int m = (e + d) / 2;

   if (v[m] < x)  
      return bb(x, m, d, v);
   else  
      return bb(x, e, m, v); 
}

int main(void) {
  int vetor[4] = {1, 7, 3, 4};
  int maior;

  maior = bb(0, 0, 4, vetor);  // Correção: alterar o índice inicial para 0

  printf("%i", maior);

  return 0;
}
