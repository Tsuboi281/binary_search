#include <stdio.h>
//

int n;
int k;
int A[100000];


int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
  int j;
  lb = 0;//作ることができる槍の長さの最小値
  long long int x = A[0];
  for(j = 0;j < n;j++){
    x += A[j];
    }
    ub = (x / k)+1;//この値だと必ずk本の槍を作ることができない
  while (ub - lb > 1){
    int m = (lb + ub) / 2;
    int l;
    int w =  0;
    for(l = 0;l < n;l++){
        w = w + (A[l]/ m);
    }
    if  (w >= k) lb = m;
    else ub = m;
    }
printf("%d\n" ,lb);
return 0;
}
