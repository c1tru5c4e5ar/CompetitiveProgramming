#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;

	vector<vector<int>> v;
	v.reserve(n*n);

	for(int i = 0; i<n; ++i){
		v[i].resize(n, 1);
	}

	
	

	for(int i = 0; i<v.size(); ++i){
		for(int j = 0; j<v[i].size(); ++j){
			cout << v[i].at(j)<<" ";
		}
		cout<<endl;
	}



}