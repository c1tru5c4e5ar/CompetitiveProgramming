#include<bits/stdc++.h>

using namespace std;

int main()
{
	map<int,int> mymap;
	mymap[2] = 3;
	mymap[3] = 4;

	mymap.emplace(2,5);

	//mymap.insert(4,5);
	cout << "3 => " << mymap.find(3)->second << '\n';

	return 0;
}
