#include<bits/stdc++.h>
#define ll long long int
using namespace std;

//Array to store the numbers that are acceptable.
//All indexes are assigned true.
vector <bool> usable(10,true);

//Check if the digits of number are acceptable
//Returns false if any digit is unacceptable
bool existancecheck(int num)
{
	int number = num;
	int temp;
	while(number>0)
	{
		temp = number%10;
		if(usable.at(temp) == 0)
			return false;
		else
			number /= 10;
	}

	return true;
}


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N; //Number in question
	cin>>N;

	int K; //Number of unacceptable digits.
	cin>>K;

	int temp;

	//Assign false to numbers(indices of boolean array) that are unacceptable
	for(int i = 0; i<K; ++i)
		{
			cin>>temp;
			usable.at(temp) = 0;
		}
	//If number is not acceptable, increment it by 1 and check again.
	//eg, 198 becomes 199 if 8 cannot be used.
	while(true)
	{
		if(existancecheck(N))
			{
                cout<<N;//Output answer if all digits are acceptable
                break;
            }
		else
			N++;
	}
	return 0;
}
