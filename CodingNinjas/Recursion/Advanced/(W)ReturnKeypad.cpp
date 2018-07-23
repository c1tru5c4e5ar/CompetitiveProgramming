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

void reserveSpace(int N)
{
  int count = 0;

  while(N>0){

    N /= 10;
    count ++;
  }

  int spaceRequried = pow(4, count);
  
  combinations.reserve(spaceRequried);
}

void returnKeypad(int value)
{
    if(value <= 1){
      combinations.emplace_back("");
      return ;
    }

    int currentValue = value % 10;
    int smallValue = value / 10;

    returnKeypad(smallValue);

    vsiter ending = combinations.end(); //Getting ending

    //Making Copies
    int numberOfCopies = keypad[currentValue].length() - 1; 

    for(int i = 0; i<numberOfCopies; ++i){
        for(vsiter vit = combinations.begin(); vit != ending; ++vit){   
            combinations.pb(*vit);
      }
    }

    //Adding String
    int k = 0;
  	for(int i = 0; i<=numberOfCopies; ++i){
    	for(int j = 0; j<=numberOfCopies; ++j){
      		combinations.at(k) += keypad[currentValue].at(i);
      		++k;
    	}    
  	}
}


int main()
{
  fstream fin("KeypadInput.txt", ios::in);
  
  int N = 23;
  //fin>>N;


  constructKeypad();
  reserveSpace(N);
  returnKeypad(N);

  
  //Answer
  //cout<<combinations.size();
  copy(combinations.begin(), combinations.end(), ostream_iterator<string>(cout, " "));

  return 0;
}