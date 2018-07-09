#include<bits/stdc++.h>
#include<math.h>
#define ll long long int
using namespace std;

array<bool,21> primes;
//map<int,int> primefactors;



bool isprime(int n)
{
	for(int i = 2; i<sqrt(n); ++i)
		if(n%i == 0) return false;
	return true;
}
///*
void sieveoferatosthenes(int n)
{
	primes.fill(1);
	 primes.at(0) = 0;
	 primes.at(1) = 0;

	 for(int i = 2; i<sqrt(n); ++i)
	 {
	 	if(primes.at(i)==1)
	 	{
	 		for(int j = i*2; j<=n;	j+=i)
	 			primes.at(j) = 0;
	 	}
	 		
	 		//if(primes.at(j)%i==0)
	 		//	primes.at(j) = 0;
	 	//if(!isprime(i))
	 	//	primes.at(i) = 0;
	 }
}
//*/
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin>>n;
	cout<<endl;

	sieveoferatosthenes(n);

	for(int i:primes)
		cout<<i;
	//cout<<isprime();
	
	return 0;
}