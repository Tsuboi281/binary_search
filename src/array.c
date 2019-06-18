#include <stdio.h>

int n;
int k;
int A[100000];


int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
  int lb = -1;
  int ub = n;
  while(ub - lb > 1){
    int m = (lb + ub) / 2;
    if(A[m] >= x) ub = m;
    else lb = m;
    }
    printf("%d\n" ,ub);
  return 0;
}
