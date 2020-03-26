#include <bits/stdc++.h>
#define endl '\n'

using namespace std;


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);	
	int ans = 0;
	vector<int> vec, pos;
	int n,m,k;
	cin>>n>>m>>k;
	for(int i=0; i<n; i++){
		int a;
		cin>>a;
		vec.push_back(a);
		if(i>=1){
			pos.push_back(vec[i] - vec[i-1]);
		} 
		
	}
	sort(pos.begin(), pos.end());
	ans = vec[n-1] - vec[0] +1;

	for(int i=n-2; i>n-k-1; i--){
		cout<<pos[i]<<endl;
		ans -= pos[i] - 1;
	}
//	for(int i=0; i<vec.size(); i++){
//		cout<<vec[i];
//	}
	for(int i=0; i<pos.size(); i++){
		cout<<pos[i];
	}
	cout<<ans;
	
	
	return 0;
}
