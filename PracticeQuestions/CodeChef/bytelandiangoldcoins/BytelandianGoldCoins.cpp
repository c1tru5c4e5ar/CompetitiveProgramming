#include<bits/stdc++.h>
#define ll long long int
#define vi vector<int>
using namespace std;

vector<ll> coins(10001);

ll bgc(ll n) //Dynamic Programming approach
{
	if(n<10001)
		return coins.at(n);
	return (bgc(n/2)+bgc(n/3)+bgc(n/4));
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    coins.at(0) = 0;
    for(ll i = 1; i<10001; ++i)
        coins.at(i) = max(i, coins.at(i/2) + coins.at(i/3) + coins.at(i/4) );

    ll n;
    while(scanf("%lld", &n)!=EOF)
		cout<<bgc(n)<<endl;

    return 0;
}