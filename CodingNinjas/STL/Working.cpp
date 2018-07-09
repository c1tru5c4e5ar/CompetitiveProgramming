#include<bits/stdc++.h>
using namespace std;

int main()
{

  int arr[] = {8, 4, 5, 7, 11};
  std::vector<int> v(arr, arr+5);

  sort(v.begin(), v.end());
  for(auto a:v)
    cout<<a;


  return 0;
}
