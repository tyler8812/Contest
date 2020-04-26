#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
        string s1, s2;
        cin>>n;
        cin>>s1>>s2;
        string a1 = "LanA WIN";
        string a2 = "LanE WIN";
        string a3 = "WINWIN";

        //n = 10000;
        int ans1[n], ans2[n];

       
        
        int cnt=0;
        for(int i=0;i<n;i++)
        {
                if(s1[i]=='A') cnt++;
                ans1[i]=cnt;
        }
        long long int sum1=0;
        for(int i=0;i<n;i++)
        {
                if(s1[i]=='K')
                sum1+=ans1[i]*(ans1[n-1]-ans1[i]);
        }
        
        cnt=0;
        for(int i=0;i<n;i++)
        {
                if(s2[i]=='A') cnt++;
                ans2[i]=cnt;
        }
        long long int sum2=0;
        for(int i=0;i<n;i++)
        {
                if(s2[i]=='K')
                sum2+=ans2[i]*(ans2[n-1]-ans2[i]);
        }
        // cout<<sum1<<sum2;
        if(sum1>sum2){
                cout<<a1;
        }else if(sum1 < sum2){
                cout<<a2;
        }else{
                cout<<a3;
        }



	return 0;
}