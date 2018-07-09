#include<bits/stdc++.h>
#define vi vector<int>
#define ll long long int

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	//cin.tie(0);
	
	vi array = {8,5,3,11,17,-4,16,-8,-14,-1,0};

	cout<<"What are you looking for? "<<endl<<">> ";
	int lookingFor;
	cin>>lookingFor;

	std::sort(array.begin(), array.end()); //Sort the array first (-14,-8,-4,-1,0,3,5,8,11,16,17)

	int first = 0;
	int last = array.size()-1;
	int mid;

	int foundAt = -1; //Index where the number is found at;

	for(;first<=last;)
	{
		mid = first + (last-first)/2;

		if (lookingFor==array.at(mid))
			{
				foundAt = mid;
				break;
			}

		else if (lookingFor>array.at(mid))
			first = (mid+1);

		else
			last = (mid-1);
	}

	foundAt>=0?cout<<"Element was found at index: "<<foundAt<<endl:cout<<"Element was not found!";

	return 0;
}
