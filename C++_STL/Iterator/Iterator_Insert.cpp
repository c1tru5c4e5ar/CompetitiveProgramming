#include<bits/stdc++.h>
using namespace std;

int main()
{
	std::vector<int> v;
	ifstream fin("Input.txt", ios::in);

	v.insert(v.end(), istream_iterator<int>(fin), istream_iterator<int>()); //More Efficient than copying directly
	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));

	return 0;
}
