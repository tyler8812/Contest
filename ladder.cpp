#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int const maxn = 1e3 + 10;
int const MOD = 1000000009;

int check(int n,int k){
  	if(n==0 && k==0){
  		return 1;
	  }else if(n==1 && k==1){
	  	return 1;
	  }else if(n==2 && k==1){
	  	return 1;
	  }
  	if(n>2 && k>1){
  		return (check(n-1,k-1) + check(n-2,k-1))%(10^9+9);
	}else if(n>2 && k == 1){
		return 0;
	}

  }
  
int main(){
  int N,k, dp[maxn][maxn];
  cin>>N>>k;
  dp[0][0] = dp[1][1] = dp[2][1] = 1;

  for(int i = 2; i <= N; i++)
    for(int j = 2; j <= min(k, i); j++)
      dp[i][j] = (dp[i-1][j-1] + dp[i-2][j-1]) % MOD;

  int sum = 0;
  for(int j = 0; j <= k; j++) sum = (sum + dp[N][j]) % MOD;
  printf("%d\n", sum);
  
  

  return 0;
}
