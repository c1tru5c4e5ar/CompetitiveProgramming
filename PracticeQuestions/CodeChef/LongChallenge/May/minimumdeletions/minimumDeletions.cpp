#include<bits/stdc++.h>
//#include<numeric>
using namespace std;

std::vector<int> v;
std::vector<bool> b;
//std::vector<int>::iterator it;

int gcd(int x, int y)
{
  while(x*y != 0){
    if(x>=y) x = x%y;
    else y = y%x;
  }
  return (x+y);
}

int main()
{
  int testcases;
  std::cin>>testcases;

  while(testcases >= 1){

    //Size of array
      int N;
      std::cin>>N;

    //Input Array
      int a;
      for(int i = 0; i<N; ++i){
        std::cin>>a;
        v.push_back(a);
      }

    //Sort array in ascending order
      std::sort(v.begin(), v.end());

    //Create boolean array to check for deletions
      b.resize(N);
      std::fill(b.begin(), b.end(), true);

    //To record number of deletions
      int deletions = 0;

    //If 0 is present in list, delete it
    int i = 0,j;
    if(v.at(0)==0)
    {
      deletions ++;
      i++;
    }


    for( ; i<N; ++i){
      if(b.at(i) == true)
      {
        for(j = i+1; j<N; ++j){
          if(b.at(j) == true)
          {
            if(gcd(v.at(i),v.at(j)) != 1)
            {
              b.at(j)=false;
              deletions++;
            }
          }
        }
      }
    }

    if(deletions == N-1)
      std::cout<<-1;
    else
      std::cout<<deletions;

    testcases--;
  }

  return 0;
}
