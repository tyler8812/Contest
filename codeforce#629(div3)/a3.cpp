#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(){
        ios::sync_with_stdio(false);    
        cin.tie(0);
        int n, a;
        int count = 0;
        char c[50000];
        char aa[50000] = {};
        char bb[50000] ={};
        cin>>n;
        for(int i=0; i<n; i++){
                count = 0;
                cin>>a;
                for(int j=0; j<a; j++){
                        cin>>c[j];
                }

                for(int j=0; j<a; j++){
                        if(count == 0){
                                if(c[j] == '2'){
                                        aa[j] = '1';
                                        bb[j] = '1';
                                }else if(c[j] == '1'){
                                        aa[j] = '1';
                                        bb[j] = '0';
                                        count++;

                                }else if(c[j] == '0'){
                                        aa[j] = '0';
                                        bb[j] = '0';
                                }
                                
                        }else{
                                if(c[j] == '2'){
                                        aa[j] = '0';
                                        bb[j] = '2';
                                }else if(c[j] == '1'){
                                        aa[j] = '0';
                                        bb[j] = '1';

                                }else if(c[j] == '0'){
                                        aa[j] = '0';
                                        bb[j] = '0';
                                }
                        }
                        
    
                }
                for(int j=0; j<a; j++){
                        cout<<aa[j];
                }
                cout<<endl;
                 for(int j=0; j<a; j++){
                        cout<<bb[j];
                }
                 cout<<endl;
                

        }



        return 0;

}