#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
vector<int> group;
int main(){
        int find(int);
        void Union(int, int);
        int n,m;
        int a,b;
        int ans,count = 0;
        
        while(scanf("%d %d",&n , &m)  &&  n  &&  m){
                 group.push_back(0);
                for(int i=1; i<=n; i++){
                        group.push_back(i);
                }
                for(int i=0; i<m; i++){
                        scanf("%d %d",&a , &b);
                        Union(a,b);
                }
                // for(int i=1; i<=n; i++){
                //         printf("%d ",group[i]);
                // }
                
                for(int i=1; i<=n; i++){
                        group[i] = find(i);
                }
                // for(int i=1; i<=n; i++){
                //         printf("%d ",group[i]);
                // }
                
                sort(group.begin(), group.end());
                group.erase(unique(group.begin(), group.end()), group.end());
                
                
                printf("Case %d: %d\n",++count,group.size()-1);
                group.clear();
        }
        
        return 0;

}


int find(int v){
                if(v == group[v]){
                        return v;
                }
                return group[v] = find(group[v]);
}

void Union(int u, int v){

        group[find(u)] = find(v);

}