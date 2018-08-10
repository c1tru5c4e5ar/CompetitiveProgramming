#include<bits/stdc++.h>

#define vi std::vector<int>
#define vs std::vector<string>
#define ds std::deque<string>
#define viiter std::vector<int>::iterator
#define vsiter std::vector<string>::iterator
#define dsiter deque<string>::iterator
#define siter std::string::iterator
#define pb push_back


using namespace std;

string output;
vs subsequences;

void printSubsequences(siter first, siter last)
{
	if(first == last)	{
		cout<< output << endl;
		subsequences.push_back(output);
		return ;
	}

	printSubsequences(first+1, last);

	string temp = output;
	output += *first;
	printSubsequences(first+1, last);
	output = temp;
}

int main()
{
	string str = "abc";
	output = "";

	printSubsequences(str.begin(), str.end());

	return 0;
}