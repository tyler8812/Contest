#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(){
        ios::sync_with_stdio(false);    
        cin.tie(0);
        int n;
        long long a, b;
        cin>>n;
        for(int i=0; i<n; i++){
                cin>>a>>b;
                if(a%b == 0){
                        cout<<0<<endl;
                }else{
                        cout<<b - (a%b)<<endl;
                }

                





        }



        return 0;

}