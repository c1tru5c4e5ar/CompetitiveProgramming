#include<bits/stdc++.h>
using namespace std;

int main()
{
	int Testcases;
	int N , X;

	cin>>Testcases;
	while(Testcases--){

		cin>>N>>X;
		int temp; bool flag = false;
		for(int i = 0; i<N; ++i){
			cin>>temp;
			if(temp >= X)	{
				cout<<"YES";
				flag = true;
				break;
			}
		}
		if(flag==false)
			cout<<"NO";
	}


	return 0;
}