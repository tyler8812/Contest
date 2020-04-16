#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, num;
	vector <int> data, lib;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> num;
		data.push_back(num);
	}

	lib = data;
	sort(lib.begin(), lib.end());
	for(auto i:lib){
		cout<<i<< " ";
	}
	cout<<endl;

	lib.erase(unique(lib.begin(), lib.end()),lib.end());
	for(auto i:lib){
		cout<<i<< " ";
	}
	cout<<endl;
	for(auto &i: data){
		cout<<i<<" ";
		i = lower_bound(lib.begin(), lib.end(), i) - lib.begin();
		cout<<i<<endl;
	}
	for(auto i: data){
		cout<<i<< " ";
	}
	cout<<endl;







}