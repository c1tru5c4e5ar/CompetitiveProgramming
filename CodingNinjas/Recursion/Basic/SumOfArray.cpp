#include<bits/stdc++.h>
#define pb push_back

using namespace std;

int SumOfVector(std::vector<int>::iterator first, std::vector<int>::iterator last)
{
    if((first) == (last-1))
      return (*first);

    int sum = (*first) + SumOfVector(first+1, last);
    return sum;
}

int SumOfArray(int a[], int N)
{
  if(N <= 1)
    return a[0];

  int sum = a[0] + SumOfArray(a+1, N-1);
  return sum;
}

int main()
{
  int N;
  cin>>N;

//  std::vector<int> arr;

/*
  int x;
  for(int i = 0; i<N; ++i){
    cin>>x;
    arr.pb(x);
  }
*/
  //cout<<SumOfVector(arr.begin(), arr.end())<<"\n";

  int num[5] = {1,2,3,4,5};
  cout<<SumOfArray(num, 5);

}
