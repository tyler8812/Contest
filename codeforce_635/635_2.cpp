#include <bits/stdc++.h>
#define endl '\n'

using namespace std;


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);	
	int n, a, b, c;
	int aa, bb, cc;
	string ans;
	int temp;
	cin>>n;
	while(n--){
		ans = "NO";
		temp = 0;
		cin>>a>>b>>c;
		bb = b;
		cc = c;
		aa = a;
		while(cc--){
			aa = aa-10;	
			if(aa<=0){
				ans = "yes";
				temp = 1;
				break;
			}
		}
		if(!temp){
			while(b--){
				a = a/2+10;	
			}
			while(c--){
				a -= 10;
				if(a<=0){
					ans = "yes";
					break;
				}
			}	
		}
		
		cout<<ans<<endl; 
	} 

	
	
	
	
	return 0;
}
