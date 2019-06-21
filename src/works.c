#include <stdio.h>

int n;
int k;
int A[100000];

int p(int A[100000],int n ,int k ,int m){
    int x = 0;
    int y = 0;
    while (y < n){
        x += 1;
        if (x > k){return 0;}
        else{
            if (A[y] > m){return 0;}
            else {
                int w = A[y];
                int z = 1;
                while(z == 1){
                    y += 1;
                    w += A[y];
                    if (w > m) z = 0;
            }
        }
    }
}
return 1;
}


int main(){
  int i, lb;
  long long int ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
  
  int j = 0;
  lb = 0;
    
  ub = A[0];
  while(j < n - k){
    j += 1;
    ub += A[j];
  }
  
  
  while(j < n-1){
    j += 1;
    if (ub < A[j]) ub = A[j];
  }//ubとして条件を満たすものを一つを持ってくる
  
  
  
  while (ub - lb > 1){
    int m = (lb + ub) / 2;
    if (p(A,n,k,m)){ub = m;}
    else {lb = m;}
    }
  printf("%lld\n" ,ub);

  return 0;
}
