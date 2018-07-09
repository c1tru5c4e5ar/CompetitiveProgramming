#include<bits/stdc++.h>
using namespace std;

int countall(int n);

int main()
{
  int N;
  cin>>N;

  cout<<countall(N)<<"\n";

  return 0;
}

int countall(int n)
{
  if(n < 10)
      return 1;

  return countall(n/10) + 1;
}
