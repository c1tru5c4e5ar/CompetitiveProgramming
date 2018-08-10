#include<bits/stdc++.h>
using namespace std;

bool isPrime(int& N)
{
	if(N%2==0)
		return false;
	for(int i = 3; i <= sqrt(N); i+=2){
		if(N % i == 0)
			return false;
	}
	return true;
}


int main()
{
	int N = 5;
	//fin>>N;
	(isPrime(N)== true) ? cout<<"True": cout<<"False";
	/*
	int count = 0;
	for(int i = 1; i<=N; i+=2){
		if(isPrime(i))
			count++;
	}

	cout<<count;
	*/

	return 0;
}