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
                do{y++; w+=A[y];}while(w <= m);
        }
    }
}
return 1;
}


int main(){
  int i, lb;
  int ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
  
  int j;
  lb = 0;
    
  ub = A[0];
  for(j = 0;j <= n - k ;j++){
    ub += A[j];
  }
  
  
  for( j = n - k + 1; j < n;j++){
    if (ub < A[j]) ub = A[j];
  }//ubとして条件を満たすものを一つを持ってくる
  
  
  
  while (ub - lb > 1){
    int m = (lb + ub) / 2;
    if (p(A,n,k,m)){ub = m;}
    else {lb = m;}
    }
  printf("%d\n" ,ub);

  return 0;
}
