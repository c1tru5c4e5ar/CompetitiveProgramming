#include<bits/stdc++.h>
using namespace std;

std::vector<bool> sieve;

void makeSieve()
{
	int N = sieve.size();

	if(sieve.size()<2){
		sieve.at(0) = false;
		if(sieve.size() == 1)
			sieve.at(1) = false;
		return ;
	}

	sieve.at(0) = false;
	sieve.at(1) = false; 

	for(int i = 2; i < sqrt(N)
	 ; ++i){
		if(sieve.at(i)== true)	{
			int currentIndex;
			for(int j = i; (j*i) < N ; ++j){
				currentIndex = j*i;
				sieve.at(currentIndex) = false;
			}
		}
	}

}

void printSieve()
{
	fstream fout("Output.txt", ios::out);

	for(int i = 0; i < sieve.size(); ++i){
		fout<<i<<" "<<sieve.at(i)<<endl;
	}
}

int countPrimes()
{
	int count = 0;
	for(auto a: sieve){
		if(a==true)	{
			count++;
		}
	}
	return count;
}

int main()
{
	fstream fin("Input.txt", ios::in);
	int N;
	fin>>N;

	sieve.resize(N+1, true);
	makeSieve();
	printSieve();
	//int count = countPrimes();
	//cout<<count<<endl;



	return 0;
}