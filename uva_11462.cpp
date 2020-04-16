#include <bits/stdc++.h>
// #define endl '\n'
using namespace std;

int main(){
        // ios::sync_with_stdio(false);    
        // cin.tie(0);
        int n, num, count = 0, c=0;
        vector <int> vec;
        while ( scanf("%d",& n) == 1 && n){
                c = 0;
                for(int i=0; i<n; i++){
                        scanf("%d",&num);
                        vec.push_back(num);
                }
                sort(vec.begin(), vec.end());
                for( auto i:vec){
                        if(c>0){
                                printf(" ");
                        }
                        printf("%d",i);
                        
                }
                printf("\n");
                vec.clear();
        }

        return 0;

}