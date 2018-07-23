#include <bits/stdc++.h>
#define pb push_back

using namespace std;

bool CheckNumber(vector<int>::iterator first, vector<int>::iterator last, int n)
{
  if(first == last)
    return false;

  if(*first == n)
    return true;

  bool i = CheckNumber(first+1, last, n);
  if(i == true)
    return true;
  return false;
}


int main()
{

  int N;
  cin>>N;

  std::vector<int> arr;

  int x;
  for(int i = 0; i<N; ++i){
    cin>>x;
    arr.pb(x);
  }

  return 0;
}
