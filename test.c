#include <stdio.h>

int main(void){
  int i;
  int ans = 1;
  for(i=1; i<=13 ; i++){
    ans *= i;
    printf("%d (n=%d)\n",ans,i);
  }
}
