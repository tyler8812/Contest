#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

static int path=0,M,N;
int Count(int,int,int);
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
		cin>>N>>M;
                Count(1,1,1);
                cout<<path<<endl;

	return 0;
}

int Count(int n,int m,int floor){
        if(floor==100){
                 return path++;
        }
        else if(floor<99){ 
                if(floor==74)return 0;
                
                return Count(n,m,floor+2);
                
                 if(m<M){
                        cout<<"a"<<endl;
                        Count(n,m+1,floor);
                }
                else if(n<N)
                {
                        cout<<"b"<<endl;
                        Count(n+1,m,floor);
                        Count(n+1,m,floor+1);
                }
                

        }
        
        else{
                if(m<M){
                        Count(n,m+1,floor);
                }
                else if(n<N)
                {
                        Count(n+1,m,floor);
                        Count(n+1,m,floor+1);
                }
        }
        return;
}