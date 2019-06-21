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
  int j = 0;
  lb = 0;
  ub = A[0];
  while(j < n){
    j += 1;
    if (ub < A[j]) ub = A[j];
    }//Aの要素の最大値はりんごバックに入れることができるリンゴの個数としてあり得るのでそれをubとしてとる
  while (ub - lb > 1){
    int m = (lb + ub) / 2;
    int i = 0;
    int w =  0;
    while (i < n){
        w += ((A[i] -1)/ m) + 1;
        i += 1;
    }
    if  (w <= k) ub = m;
    else lb = m;
    }//Σ(a_i/mの余りの切り上げ) <= kを満たす最小のmが求めるm
printf("%d\n" ,ub);
return 0;
}
