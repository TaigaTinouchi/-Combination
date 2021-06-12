/*漸化式の計算*/
#include <stdio.h>
int combination(int n, int r){
  if ( r==0 || r==n ){
    return 1;
  }else{
    return combination(n-1,r-1)+combination(n-1,r);
  }
}
int main(void){
  int i,n,r;
  printf("Enter number of n:");scanf("%d",&n);
  printf("Enter number of r:");scanf("%d",&r);
  long nCr=combination(n,r);
  printf("%dC%d=%ld\n",n,r,nCr);
  return 0;
}
