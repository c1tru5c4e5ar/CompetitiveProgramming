#include<bits/stdc++.h>
using namespace std;

void allSubsequences(string& s, vector<string>& v)
{
	if(s.empty())
		{
			v.emplace_back("");
			return ;
		}
	
	string str = s.substr(1);
	allSubsequences(str, v);

	vector<string>::iterator end = v.end();
	
	for(vector<string>::iterator vst = v.begin(); vst != end; ++vst){

		str = s[0] + (*vst);
		v.push_back(str);
	}

/*
	Alternate method without iterators
	int len = v.size();
	for(int i = 0; i < len; ++i){
		string str = s[0] + v.at(i);
		v.push_back(str);
	}
	return ;
*/
}


int main()
{
	string str;
	vector<string> vs;

	//Take input from file
	ifstream fin("StringInput.txt");
	fin>>str;

	vs.reserve(pow(2, str.length())); //Important to increase capacity to hold 2^n elements.
                                      //Otherwise vector will reallocate and iterators won't work after reallocation.
	allSubsequences(str, vs);

	cout<<"All possible subsequences for string "<<str<<" are:"<<endl;
	copy(vs.begin(), vs.end(), ostream_iterator<string>(cout, " "));


}

