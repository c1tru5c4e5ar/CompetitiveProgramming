#include<bits/stdc++.h>

using namespace std;

int main()
{
  int arr[] = {10, 13, 17, 25, 19, 7, 31, 0, -3, -8};
  std::vector<int> v (arr, arr+10);

  std::sort(v.begin(), v.end());

  for(std::vector<int>::iterator it = v.begin(); it != v.end(); ++it)
    std::cout<<*it<<" ";
  cout<<endl;

  int N;
  std::cout<<"Enter Number to look for: ";
  std::cin>>N;


//Using Lower Bound to find index:
//In case of repititions, it returns index of first number
  if(binary_search(v.begin(), v.end(), N))
      cout<<"Number found at index: "<<lower_bound(v.begin(), v.end(), N) - v.begin();
  else
      cout<<"Number NOT found"<<endl<<"Value returned: "<<lower_bound(v.begin(), v.end(), N) - v.begin();

  cout<<endl;

  //Upper Bound returns index of next higher number:


  return 0;
}
