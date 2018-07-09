#include<bits/stdc++.h>
using namespace std;


vector<bool> coins;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N,Q;	//number of coins, testcases
	cin>>N>>Q;

	for(int i = 0; i<N; ++i)
		coins.push_back(0);


while(Q)
{
	//input
	int A,B;
	int command;
	cin>>command>>A>>B;

	if(command)
	{
		//Display heads b/w a and b;
		int count = 0;
		for(int i = A; i<=B; ++i)
			if(coins.at(i))
				count++;

		cout<<count;
	}
	else
	{
		//flip coins b/w a and b;
		for(int i = A; i<=B; ++i)
		{
			if(coins.at(i))
				coins.at(i) = 0;
			else
				coins.at(i) = 1;
		}
	}
	--Q;
}
	//for(int i:coins)
	//	cout<<i;
	return 0;
}
