#include<bits/stdc++.h>

using namespace std;

bool greatest(int &a, int &b)
{
  return a>b;
}

int main()
{
  std::vector<int> arr;
  int N;
  int K;

  cin>>N;
  for(int i=0; i<N; ++i){
    int x;
    cin>>x;
    arr.push_back(x);
  }

  cin>>K;

  std::sort(arr.begin(), arr.end(), greatest);

  cout<<arr.at(K);

}
