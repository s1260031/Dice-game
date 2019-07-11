#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){

  int D1,D2;
   
  srand((int)time(NULL));
  
  D1 = rand()%6+1;
  for(int i = 0; i < 100; i++){
    D2 = rand()%6+1;
  }
  
  printf("Rolling the dice...\n");
  printf("Die 1: %d\n",D1);
  printf("Die 2: %d\n",D2);
  printf("Total value: %d\n",D1+D2);
  if(D1+D2 > 7) printf("You won!\n");
  else printf("You lost!\n");
 

 
  return 0;
}
