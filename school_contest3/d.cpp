#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

static int path=0,M,N;
void Count(int,int,int);
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	list <int> a;
        list<int>::iterator it, location;
        int n;
        int temp;
        int aa, bb;
        long long sum = 0;
        int min = 2*1e9;
        cin>>n;
        while (n--)
        {
                cin>>temp;
                a.push_back(temp);
        }

        while(a.size() > 1){
                min = 2*1e9;
                for(it = a.begin(); it!= --a.end();++it){
                        aa = *it;
                        bb = *(++it);
                        --it;
                        // cout<<aa<<" "<<bb<<endl;

                        if(aa+bb< min){
                               location = it; 
                               min = aa+bb;
                        }

                }
                // cout<<min;
                sum += min;
                *location = min;
                a.erase(++location);               

        }
        cout<<sum;


	return 0;
}
