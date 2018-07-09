#include<bits/stdc++.h>
using namespace std;

//Recursive formula = min(best, 1+f(n-c)).
std::vector<int> coins;
std::vector<bool> fil;
std::vector<int> minimum;
int minimumcoins(int n)
{
  if(n<0)
    return 1e5;
  if(n==0)
    return 0;
  int best = 1e5;
  for(auto c: coins){
    best = std::min(best, 1 + minimumcoins(n-c));
  }

  return best;
}

int minimumcoinsDP(int n)
{
  if(n<0)
    return 1e5;
  if(n==0)
    return 0;
  if(fil.at(n)==true)
    return minimum.at(n);

  int best = 1e5;
  for(auto c: coins){
    best = std::min(best, 1 + minimumcoins(n-c));
  }
  minimum.at(n) = best;
  fil.at(n) = true;

  return minimum.at(n);
}

int main()
{
  int num;
  std::cin>>num;


  int denom;
  std::cin>denom;

  minimum.resize(num+1);

  coins.resize(denom);

  fil.resize(num+1);
  fill(fil.begin(), fil.end(), false);
  fil.at(0) = false;

  for(int i = 0; i<coins.size(); ++i){
    std::cin>>coins.at(0);
  }


  std::cout<<minimumcoins(num);

  return 0;
