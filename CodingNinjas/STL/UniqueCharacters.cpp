#include<bits/stdc++.h>
using namespace std;

char* uniqueChar(char *str){

  int len = strlen(str); //Calc length of array;

    	unordered_set<char> S; //Creating hashmap to check for duplicates.
      string res;//Result string for unique characters.

    	S.insert(str[0]);
      res.push_back(str[0]);  //Inserted first character into set and resultant string.

    	for(int i = 1; i<=len; ++i){ //Starting from second element, traverse through str.
        if( find(S.begin(), S.end(), str[i]) == S.end()) //If duplicate element not found, insert into string and set
        {
          S.insert(str[i]);
          res.push_back(str[i]);
        }
      }

    char* result = new char[res.length()+1];
    strcpy(result, res.c_str()); //Convert to C-style array;

    return result; //return array
}

int main()
{

char st[1024];
cin>>st;

char* s = uniqueChar(st);

string foo(s);
cout<<foo;

  return 0;
}
