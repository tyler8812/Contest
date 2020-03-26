#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(){
        ios::sync_with_stdio(false);    
        cin.tie(0);
        int n;
        long long a;

        cin>>n;
        for(int i=0; i<n; i++){
                cin>>a;
                long long temp = 0;
                long long ar[a];
                map <long long,long long> test;
                test.clear();
                map<long long ,long long>::iterator iter;
                long long ans[a];
                int count = 0;
                for(int i=0; i<a; i++){
                        cin >>ar[i];
                }
                // for(int i=0; i<a; i++){
                //         cout <<ar[i];
                // }
                for(int i=0; i<a; i++){
                        if(i==a-1){
                               iter = test.find(ar[i]);
                                if(iter != test.end()){
                                        if(temp == ar[i]){
                                                ans[i] = count; 
                                        }else if(temp !=) {
                                                ans[i]  = iter->second;
                                                temp = ar[i];
                                        }
                                }else{
                                        temp = ar[i];
                                        test[ar[i]] = ++count;
                                        ans[i] = count; 
                                }



                       }
                       if(test.empty()){
                               test[ar[i]] = ++count;
                                ans[i] = count; 
                                temp = ar[i];
                       }else{
                               
                                iter = test.find(ar[i]);
                                if(iter != test.end()){
                                        if(temp == ar[i]){
                                                ans[i] = count; 
                                        }else{
                                                ans[i]  = iter->second;
                                                temp = ar[i];
                                        }
                                }else{
                                        temp = ar[i];
                                        test[ar[i]] = ++count;
                                        ans[i] = count; 
                                }
                       }
                

                }
                cout<<count<<endl;
                       for(int i=0; i<a; i++){
                               cout<<ans[i]<<" ";
                       }
                        cout<<endl;

        }



        return 0;

}