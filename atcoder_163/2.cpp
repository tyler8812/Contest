#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(){
        ios::sync_with_stdio(false);    
        cin.tie(0);
        int n, m;
        cin>>n>>m;
        int ans=0;
        int temp;
        int array[m];
        while(m--){
        	cin>>temp;
        	ans += temp;
		}
		if(ans>n){
			cout<<-1;
		}else{
			cout<<n-ans;
		}

        return 0;

}
