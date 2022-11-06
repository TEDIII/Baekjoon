#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int word(const void *w1, const void *w2);

int main(void) {
  int N;
  
  scanf("%d", &N);
  
  char w[N][51];
  
  for(int i=0; i<N; i++){
    scanf("%s", w[i]);
  }
  
  qsort(w, N, sizeof(w[0]), word);

  for(int i=0; i<N; i++){
    if(!strcmp(w[i], w[i+1]))
      continue;
    else
      printf("%s\n", w[i]);
  }
  return 0;
}

int word(const void *w1, const void *w2){
  int len1 = strlen(w1), len2 = strlen(w2);
  if(len1 == len2){
    return strcmp((char*)w1, (char*)w2);
  }else if(len1 > len2){
    return 1;
  }else 
    return -1;
}