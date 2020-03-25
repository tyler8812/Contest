#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int check(int n,int k){
  	if(n==0 && k==1){
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
  int N,k;
  cin>>N>>k;
  cout<<check(N,k);
  
  

  return 0;
}
