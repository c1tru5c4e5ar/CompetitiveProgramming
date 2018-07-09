#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	long long int noOfGums;
	cin>>noOfGums;

	long long int hardnessLimit;
	cin>>hardnessLimit;

	//long long const int N = noOfGums;
	long long int hardnessQuotients[noOfGums];

	for(int i = 0; i<noOfGums; ++i)
		cin>>hardnessQuotients[i];

	sort(hardnessQuotients, hardnessQuotients+noOfGums);

	long long int noOfPairs = 0;
    //long long int sum = 0;
	for(long long int i = 0; i<noOfGums; ++i)
	{
		for(long long int j = i+1; j<noOfGums; ++j)
		{
            hardnessQuotients[i]+hardnessQuotients[j];

			if((hardnessQuotients[i]+hardnessQuotients[j]) < hardnessLimit)
				noOfPairs++;

			else if((hardnessQuotients[i]+hardnessQuotients[j]) >= hardnessLimit)
				break;
		}
	}

	cout<<noOfPairs;

	return 0;

	}
