#include <stdio.h>
#include <string.h>

int main(void) {
  int T;
  char alphabet[10000];

  scanf("%d", &T);
  for(int i=0; i<T; i++){
    scanf("%s", alphabet);
    if(strlen(alphabet) != 7){
      printf("0\n");
      continue;
    }if(alphabet[0] == alphabet[1] && alphabet[2] == alphabet[3] && alphabet[0] == alphabet[4] && alphabet[2] == alphabet[5] && alphabet[5] == alphabet[6] && alphabet[0] != alphabet[2])
      printf("1\n");
    else
      printf("0\n");
  }
  return 0;
}