#include<iostream>
#include<vector>
#include<algorithm>

int main()
{
  //Calculate number of elements that belong to both lists.

  std::vector<int> A = {5,2,8,9,4};
  std::vector<int> B = {3,2,9,5,4};

  std::sort(A.begin(), A.end());
  std::sort(B.begin(), B.end());

  unsigned int counter = 0;

  int i = 0; int j = 0;
  while(i<A.size()&&j<B.size())
  {
    if(A.at(i)==B.at(j))
      {
        counter++;
        ++i; ++j;
      }

    else if(A.at(i)>B.at(j))
      ++j;

    else if(A.at(i)<B.at(j))
      ++i;
  }
  std::cout<<counter<<'\n'; //4
  return 0;
}
