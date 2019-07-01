#include <stdio.h>
//

int n;
int k;
int A[100000];


int main(){
  int i;
  long long int ub,lb;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
  int j;
  lb = 0;//作ることができる槍の長さの最小値
  ub = A[0];
  for(j = 1;j < n;j++){
    ub += A[j];
    }
    ub = (ub / k)+1;//この値だと必ずk本の槍を作ることができない
    long long int m;
    int l,w;
  while (ub - lb > 1){
    m = (lb + ub) / 2;
    w =  0;
    for(l = 0;l < n;l++){
        w = w + (A[l]/ m);
    }
    if  (w >= k) lb = m;
    else ub = m;
    }
printf("%lld\n" ,lb);
return 0;
}
