#include<bits/stdc++.h>
#define vi vector<int>
#define ll long long int

using namespace std; 

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	vi array = {8,5,3,11,17,-4,16,-8,-14,-1,0};

	//cout<<array.size();

	//Bubble Sort
///*
	for(int i = 0; i<(array.size()-1); ++i)
	{
		for(int j = 0; j<((array.size()-1)-i); ++j)
		{
			if(array.at(j)>array.at(j+1))
				{
					int temporary = array.at(j+1);
					array.at(j+1) = array.at(j);
					array.at(j) = temporary;
				}
		}
	}
//*/

	//std::sort(array.begin(), array.end());

	for(auto i: array)
	{
		 cout<<i<<',';
	}
	
	return 0;
}