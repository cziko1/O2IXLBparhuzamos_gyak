#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int checkPrimeNumber(int n);
int main() {

  int numb1, numb2;
  int i;
  int flag;

  clock_t begin = clock(); //ido szamitas kezdete

  printf("Enter two positive integers: ");
  scanf("%d %d", &numb1, &numb2);

  if (numb1 > numb2) {
    numb1 = numb1 + numb2;
    numb2 = numb1 - numb2;
    numb1 = numb1 - numb2;
  }

  printf("Prime numbers between %d and %d are: \n", numb1, numb2);
  for (i = numb1 + 1; i < numb2; ++i) {

    flag = checkPrimeNumber(i);

    if (flag == 1)
      printf("%d \n", i);
    }
    clock_t end = clock();
    double time_spent = (double)(end-begin)/CLOCKS_PER_SEC;  //idoszamitas vege
    printf("\nThinking time: %f\n",time_spent);

    return 0;
  }

int checkPrimeNumber(int n) {       //prim szam fuggveny
  int j, flag = 1;

  for (j = 2; j <= n / 2; ++j) {

    if (n % j == 0) {
      flag = 0;
      break;
    }
  }

  return flag;
}
