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
  int j = 0;
  lb = 0;//作ることができる槍の長さの最小値
  long long int x = A[0];
  while(j < n){
    j += 1;
    x += A[j];
    }
    ub = (x / k)+1;//この値だと必ずk本の槍を作ることができない
  while (ub - lb > 1){
    int m = (lb + ub) / 2;
    int i = 0;
    int w =  0;
    while (i < n){
        w = w + (A[i]/ m);
        i += 1;
    }
    if  (w >= k) lb = m;
    else ub = m;
    }
printf("%d\n" ,lb);
return 0;
}
