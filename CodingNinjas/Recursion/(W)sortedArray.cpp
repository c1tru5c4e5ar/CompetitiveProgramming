#include<bits/stdc++.h>

#define push_back pb

using namespace std;

bool checkIfSorted(vector<int> &v)
{
    //Acending Order:

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

  std::sort(arr.begin(), arr.end());

  cout<<checkIfSorted(arr)?"Yes":"No";

}
