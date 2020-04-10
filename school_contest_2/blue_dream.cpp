#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	map <int , int>mymap;
	int n ,tp;
	cin>>n;
        for(int i=1; i<=100; i++){
                mymap[i] = 0;
        }

	for(int i=0;i<n;i++){
                cin>>tp;
                mymap[tp]++;
        }
        for(int i=100; i>=1; i--){
                for(int j=mymap[i]; j>0; j--){
                        cout<<i<<" ";
                }
        }
		


	return 0;
}