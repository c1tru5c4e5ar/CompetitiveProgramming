#include<bits/stdc++.h>
using namespace std;

int main()
{

	//Constructing Strings

	char a[] = "Bomba";

	string s1("Hello");
	string s2(s1, 2);  //2 means location from where to construct s2, as s1 is of class string.
	string s3(a, 2);	//But here, 2 means size of string to construct, as a is a C_style string.

	string s4(s1.begin(), s1.begin()+3); //Hel


	//Ranged Access
	//assign, append, insert, replace
	string s5 = "Dragon Land";

	s1.assign(s5); // s1 = s5;
	s1.assign(s5, 2, 4); //assign s5, starting from 4 with length = 2;
	s1.assign("Wisdom", 3); //Can assign from C_style string, with 3 as length.
	s1.assign(3, 'x'); // s1: xxx
	s1.assign({'a', 'b', 'c'}); //s1: abc

	s1.append(" def"); //s1: abc def
	s1.insert(2, "mountain", 4); //s1: abmounc def // Insert at position 2, from C_style string, of length 4.
	s1.replace(2, 5, s2, 3, 3); //abgon def.

	s1.erase(1, 4); //s1: a def.

	s2.substr(2, 4); //agon.

	s1 = "abc";
	s1.c_str(); //"abc\0"; //Converts to C_style string.

	s1.swap(s2);

  	return 0;
}
