#include<bits/stdc++.h>
using namespace std;

bool ifPossible(int a, int b, int c, int x, int y)
{
	if((a+b+c) != (x+y)) //Check if enough stones are present
		return false;
	if(a <= x)			//As smallest of existing pile must be smaller than smaller
		return true;
	else
		return false;
}


int main()
{
	fstream fin("Input.txt", ios::in);

	int Testcases;
	fin>>Testcases;

	std::vector<int> v;
	int temp;

	int x;
	int y;
	int a;
	int b;
	int c;

	while(Testcases--){
		//Input size of three piles.
		for(int i = 0 ; i<3; ++i){
			fin >> temp;
			v.push_back(temp);
		}

		//Arrange in acending order.
		std::sort(v.begin(), v.end());

		a = v.at(0);
		b = v.at(1);
		c = v.at(2);
		v.clear();

		//Input required sizes.
		fin >> x >> y;

		//Assume x <= y, if not, do so.
		if(x > y) {
			swap(x,y);
		}

		//Check if not possible to make piles
		ifPossible(a, b, c, x, y) ? cout<<"YES" : cout<<"NO";
		cout<<endl;
	}

	//int k = x - a; //Stones required to increase height of a to height of x;

}