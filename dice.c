#include<stdio.h>
#include<stdlib.h>

int main() {
  int d1 ,d2 ,sum;
  char n[30];
  
  d1 = rand()%6+1;
  d2 = rand()%6+1;

  
  sum = d1 + d2;

  printf("What is your name?\n");
  scanf("%s" ,&n);
  printf("Hello, %s!\n" ,n);


  printf("Die 1: %d\nDie 2: %d\n" ,d1 ,d2);
  printf("Total value: %d\n" ,sum);

  if(sum>=7) printf("%s won!\n" ,n);
  else ("%s lost.\n" ,n);


  return 0;
}
