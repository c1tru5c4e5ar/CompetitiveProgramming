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

std::vector<string> combinations;
std::vector<string> keypad;

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
}

int main()
{

  combinations = {"a", "b", "c", "a", "b", "c", "a", "b", "c"};
  string str = "xyz";

  int numberOfCopies = 3;

  int k = 0;
  for(int i = 0; i<numberOfCopies; ++i){
    for(int j = 0; j<numberOfCopies; ++j){
      combinations.at(k) += str.at(i);
      ++k;
    }    
  }

  for(auto &s : combinations){
    cout<<s<<" ";
  }



  return 0;
}