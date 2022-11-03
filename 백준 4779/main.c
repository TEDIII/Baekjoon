#include <stdio.h>
#include <math.h>

void cantor(int N);

int main(void) {
  int N;
  
  while(1){
    if(scanf("%d", &N) != 1){
      break;
    }
    cantor(pow(3, N));
    printf("\n");
  }
  return 0;
}

void cantor(int P){
  if(P ==1){
    printf("-");
  }else{
    cantor(P/3);
    for(int i=0; i<P/3; i++){
      printf(" ");
    }
    cantor(P/3);
  }
}