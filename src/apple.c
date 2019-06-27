#include <stdio.h>
//test
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
  lb = 0;
  ub = A[0];
  for(j = 1;j < n; j ++){
    if (ub < A[j]) ub = A[j];
    }//Aの要素の最大値はりんごバックに入れることができるリンゴの個数としてあり得るのでそれをubとしてとる
  while (ub - lb > 1){
    int m = (lb + ub) / 2;
    int l;
    int w =  0;
    for (l = 0; l < n; l++){
        w += ((A[l] -1)/ m) + 1;
    }
    if  (w <= k) ub = m;
    else lb = m;
    }//Σ(a_i/mの余りの切り上げ) <= kを満たす最小のmが求めるm
printf("%d\n" ,ub);
return 0;
}
