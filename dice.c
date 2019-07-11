#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){

  int D1,D2;
  char name[100];
   
  srand((int)time(NULL));
  
  printf("What is your name?\n > ");
  scanf("%s",name);
  printf("Hello, %s!\n",name);
  
  D1 = rand()%6+1;
  for(int i = 0; i < 100; i++){
    D2 = rand()%6+1;
  }
  
  printf("Rolling the dice...\n");
  printf("Die 1: %d\n",D1);
  printf("Die 2: %d\n",D2);
  printf("Total value: %d\n",D1+D2);

 
  return 0;
}
