#include<bits/stdc++.h>
#include<string.h>
using namespace std;

void removeConsecutiveDuplicates(char *s)
{
	if(*s == '\0')
		return ;
	if( *s == *(s+1) )
	{
		int i;
		for(i = 1 ; s[i] != '\0'; ++i){
			s[i-1] = s[i];
		}
		s[i-1] = s[i];
		removeConsecutiveDuplicates(s);
	}
	removeConsecutiveDuplicates(s+1);
}

int main()
{
	ifstream fin("Input.txt", ios::in);


	char str[5000];
	//cin>>str;
	while(!fin.eof())
		fin>>str;

	removeConsecutiveDuplicates(str);
	for(int i = 0 ; str[i] != '\0'; i++)
		cout<<str[i];

	return 0;
}