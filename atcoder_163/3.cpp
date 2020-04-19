#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(){
        ios::sync_with_stdio(false);    
        cin.tie(0);
        int n;
        int temp;
        int s;
        cin>>n;
        s = n;
        int array[n] = {0};
        while(--n){
        	cin>>temp;
        	array[temp-1]++;
		}
		for(int i=0; i<s; i++){
			cout<<array[i]<<endl;
		}

        return 0;

}
