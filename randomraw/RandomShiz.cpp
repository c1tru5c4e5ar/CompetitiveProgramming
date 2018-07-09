#include<iostream>
#include<vector>
//typedef vector<int> vi;
using namespace std;

vector<int> coins = {1,3,4};
int coinchange(int sum)
{
    if(sum<0)
        return 1e9;
    else if (sum == 0)
        return 0;
    else
        {
           	int minimumCoins = 1e9;
           	for(auto c: coins)
           		minimumCoins = min(minimumCoins, coinchange(sum-c)+1);
            return minimumCoins;
        }
}

int main()
{
    int sum = 0;
    cin>>sum;

    cout<<coinchange(sum);
    return 0;
}
