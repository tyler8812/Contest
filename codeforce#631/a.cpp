#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(){
        ios::sync_with_stdio(false);    
        cin.tie(0);
        int n;
        int m, x, temp;
        cin>>n;
        int ans, pos;
        vector <int> vec;
        while (n--)
        {
                ans = 0;
                pos = 0;
                cin>>m>>x;
                for(int i=0; i<m; i++){
                        cin>>temp;
                        vec.push_back(temp);
                }

                sort(vec.begin(), vec.end());
                for(int i=0; i<x+m; i++){
                        if(ans == vec[pos] && pos < vec.size()-1){
                                cout<<i<<" ";
                                pos++;
                        }else{
                                ans++;
                                
                        }
                
                }
                cout<<ans<<endl;
                vec.clear();


        }
        


        return 0;

}