#include<bits/stdc++.h>
using namespace std;

void replaceCharacter(char s[], char c1, char c2)
{
	if(s[0] == '\0')
		return ;
	if(s[0] == c1)
		s[0] = c2;
	replaceCharacter(s+1, c1, c2);
}


//Not working 
//with STL string class
//using iterators, figure it out
void replaceCharacter2(string::iterator s, char c1, char c2)
{
	if((*s) == '\0')
		return ;
	if((*s) == c1)
		(*s) = c2;

	advance(s, 1);
	replaceCharacter(s, c1, c2);
 }

int main()
{
	char str[5000];
	cin>>str;

	//string str;
	//cin>>str;

	char a,b;
	cin>>a>>b;

	replaceCharacter(str, a, b);
	for(int i = 0 ; str[i] != '\0'; ++i)
		cout<<str[i];

	//replaceCharacter2(str.begin(), a, b);
	//cout<<str;

	return 0;
}