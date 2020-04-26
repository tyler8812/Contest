#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

static int path=0,M,N;
int Count(int,int,int);
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
		cin>>N>>M;
                Count(N,M,100);
                cout<<path<<endl;

	return 0;
}

int Count(int n,int m,int floor){
        if(floor==0){
                return 0;
        }
        else if(floor == 1){
                return 1;
        }
        else if(floor == 2){
                if(n<=N&&m<=M){
                        return Count(n-1,m,floor) + Count(n-1,m,floor-1) + Count(n,m-1,floor);
                }
                /*else if(n>N&&m<=M){
                        return Count(n,m-1,floor);
                }
                else if(n<=N&&m>M){
                        return Count(n-1,m,floor) + Count(n-1,m,floor-1) ;
                }*/
                else{
                        return 0;
                }
        }
        else if(floor==74){ 
                return 0;
        }
        else{
                if(n<=N&&m<=M){
                        return Count(n-1,m,floor) + Count(n-1,m,floor-1) + Count(n,m-1,floor) + Count(n,m,floor-2);
                }
               /* else if(n>N&&m<=M){
                        return Count(n,m+1,floor) + Count(n,m,floor+2);
                }
                else if(n<=N&&m>M){
                        return Count(n+1,m,floor) + Count(n+1,m,floor+1) + Count(n,m,floor+2);
                }*/
                else{
                        return 0;
                }
        }
}