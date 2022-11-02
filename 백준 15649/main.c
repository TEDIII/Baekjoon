#include <stdio.h>

void showa(int a[], int M, int N);

int main(void) {
  int N, M;
  int a[8];
  for(int i=0; i<8; i++)
    a[i] = 1;
  
  scanf("%d %d", &N, &M);

  int result = 0;
  while(result != 1){
    for(int i=M-1; i>=0; i--){
      if(a[i] == N+1){
        a[i] = 1;
        a[i-1]++;
      }
    }
    showa(a, M, N);
    
    for(int i=0; i<M; i++){
      if(a[i] != N){
        break;
      }
      if(i == M-1){
        result = 1;
      }
    }
    a[M-1]++;
  }
  return 0;
}

void showa(int a[], int M, int N){
  for(int i=0; i<M-1; i++){
    for(int j = i+1; j<M; j++){
      if(a[i] == a[j]){
        return;
      }
      if(i == M-2 && j == M-1){
        for(int k=0; k<M; k++){
          printf("%d ", a[k]);
        }
        printf("\n");
        return;
      }
    }
  }
  if(M==1){
    printf("%d\n", a[0]);
  }
}