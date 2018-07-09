#include<bits/stdc++.h>
#define vi vector<int>
//#include<iostream>
using namespace std;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);

vi array = {8,5,3,11,17,-4,16,-8,-14,-1,0};


for(int i = 0; i<array.size(); ++i)
	{
		int smallestNum = array.at(i);
		int minIndex = i;
	
		for(int j = i; j<array.size(); ++j)
			if(array.at(j)<smallestNum)
				{
					smallestNum = array.at(j);
					minIndex = j;
				}

		int temporary;
		temporary = array.at(i);
		array.at(i) = array.at(minIndex);
		array.at(minIndex) = temporary;
	}


//sort(array.begin(), array.end());

for(int i: array)
	cout<<i<<' ';

return 0;
}
