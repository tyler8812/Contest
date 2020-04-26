#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
        int num,divisor = 9;
        vector <int> divi;
        cin>>num;

        if(num == 1) divi.push_back(1);
        while(divisor!=1){
                if(num%divisor == 0){
                        num /= divisor;
                        divi.push_back(divisor);
                }
                else{
                        divisor--;
                }
        }
        if(num>9) cout<<-1;
        else{
	        for(int i=divi.size()-1;i>=0;i--) cout<<divi[i];
        }
        // cout<<divi.size()<<endl;


	return 0;
}