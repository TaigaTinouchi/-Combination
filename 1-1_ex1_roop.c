/*漸化式の計算*/
#include <stdio.h>

int main(void){
  int i,n,r;

  printf("Enter number of n:");scanf("%d",&n);
  printf("Enter number of r:");scanf("%d",&r);
  long nCr=1;
  for(i=1;i<=r;i++){
    nCr = nCr*(n-i+1)/i;
  }
  printf("%dC%d=%ld\n",n,r,nCr);
  return 0;
}
