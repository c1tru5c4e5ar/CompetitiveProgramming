//#include "competitve.h"

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

vs combinations;
vs keypad;

void constructKeypad()
{
  keypad.pb("");     //0
  keypad.pb("");     //1
  keypad.pb("abc");  //2
  keypad.pb("def");
  keypad.pb("ghi");
  keypad.pb("jkl");
  keypad.pb("mno");
  keypad.pb("pqrs");
  keypad.pb("tuv");
  keypad.pb("wxyz"); //9
};

int main()
{
	constructKeypad();

	int smallValue = 4;
	const int numberOfCopies = keypad[smallValue].length() - 1;
	cout<<numberOfCopies<<endl;

	combinations = {"a", "b", "c"};
	combinations.reserve(100);
	vsiter ending = combinations.end();

	
	for(int i = 0; i<numberOfCopies; ++i){
		for(vsiter vit = combinations.begin(); vit != ending; ++vit){
			combinations.pb(*vit);
		}
	}

	//cout<<combinations.size()<<endl;
	int k = 0;
  	for(int i = 0; i<=numberOfCopies; ++i){
    	for(int j = 0; j<=numberOfCopies; ++j){
      		combinations.at(k) += keypad[smallValue].at(i);
      		++k;
    	}    
  	}



	//cout<<combinations.size()<<endl;
	copy(combinations.begin(), combinations.end(), ostream_iterator<string>(cout, " "));
	copy(keypad.begin(), keypad.end(), ostream_iterator<string>(cout," "));


	//string str = "a" + *first;
	//combinations.push_back(str);




}