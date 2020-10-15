#include <stdio.h>
#include <stdlib.h>

int main() {
  int begin, end, i, majorCycle = 0;             //Sugestão, não utiliza begin e end, acho que são palavras reservadas, como o 'int'
  int cycle, number;

  while (scanf("%d %d", &begin, &end) != EOF) {

    for (i = begin; i <= end; i++) {              //o begin pode ser 200 e end 100, os valores não sao necessariamente em orddem crescente
      number = i;
      cycle = 0;

      while (1) {
        cycle++;

        if (number == 1) break;

        if (number % 2 == 0) {
          number /= 2;
        }
        else {
          number = number*3 +1;
        }
      }
      if (majorCycle < cycle) majorCycle = cycle;      //nesse caso seria majorCycle > cycle
    }
    printf("%d %d %d\n", begin, end, majorCycle);
    majorCycle = 0;
  }

  return 0;
}


/*
    sugiro fazer uma função recursiva, que fica mais simples

    int funcao (int n){
        if (n == 1) return 1;
        if (n % 2 == 0) return (  func(n/2) + 1 )
        else return ( func(3*n + 1) +1 )
    }
*/
