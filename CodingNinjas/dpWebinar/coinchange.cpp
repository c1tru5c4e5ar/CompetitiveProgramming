#include<bits/stdc++.h>
using namespace std;


//Bottom up DP
std::vector<int> ways;
std::vector<int> coins;
std::vector<bool> filled;
int numberOfWaysBU(int n)
{
    ways.at(0) = 1; //Number of ways of making 0 is 1, By not using any coins.

    for(auto c : coins){
      for(int i = c; i<ways.size(); ++i){
        ways.at(i) += ways.at(i-c);
      }
    }
    filled.at(n) = true;
    return ways.at(n);
}

//Top Down DP
int numberOfWaysTD(int n)
{

  if(n==0)
    return 1;
  //if(n<0)
  //  return 0;

  if(filled.at(n)==true)
    return ways.at(n);

  for(auto c : coins){
    if((n-c)>=0)
      ways.at(n) += numberOfWaysTD(n-c);
    else
      continue;
  }
  filled.at(n) = true;
  return ways.at(n);
}


int main()
{
  int num;
  cin>>num;

  int denom;
  cin>>denom;

  ways.resize(num+1);
  filled.resize(num+1);
  fill(filled.begin(), filled.end(), false);
  coins.resize(denom);

  std::vector<int>::iterator itw;
  std::vector<int>::iterator itc;
  for(itc = coins.begin(); itc!=coins.end(); ++itc){
    cin>>*itc;
  }

  //cout<<numberOfWaysTD(num);

  //Debug:
  numberOfWaysTD(num);
  for(auto i: ways)
    cout<<i<<' ';


  return 0;
}
