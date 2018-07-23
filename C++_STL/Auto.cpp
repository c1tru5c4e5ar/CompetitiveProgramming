#include<bits/stdc++.h>
using namespace std;


int main()
{
	fstream fin, fout;

	fin.open("Input.txt", ios::in);
	fout.open("Output.txt", ios::out);

	std::vector<int> v(10);

	auto first = v.begin();
	auto last = v.end();

	int x;
	for(auto it = first; it != last; ++it){
		fin>>*it;
	}

	copy(first, last, ostream_iterator<int>(cout, " "));

	fout.close();
	fin.close();

	return 0;
}