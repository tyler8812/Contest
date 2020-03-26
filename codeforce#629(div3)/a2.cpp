#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(){
        ios::sync_with_stdio(false);    
        cin.tie(0);
        long long n;
        long long a, b;
        long long pa,pb;
        long long temp;
        cin>>n;
        for(long long i=0; i<n; i++){
                cin>>a>>b;
                
                for(long long j=1; j<a; j++){
                        temp = j*(j+1)/2;
                        if(temp< b){
                                continue;
                        }else{
                                pa = j;
                                pb = j-1-temp+b;
                                break;
                        }
                }
                for(long long j=0; j<a; j++){
                        if(j == a-1-pa || j == a-1-pb ){
                                cout<<"b";
                        }else{
                                cout<<"a";
                        }


                }
                cout<<endl;



                

                





        }



        return 0;

}