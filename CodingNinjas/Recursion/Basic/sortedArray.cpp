#include<bits/stdc++.h>
#define push_back pb
#define vi std::vector<int>
#define viter std::vector<int>::iterator

using namespace std;

bool checkIfSorted(viter first, viter last)
{
  if(distance(first, last) <= 1)
    return true;

  if(*first<*(first+1))
    {
      bool i = checkIfSorted(first+1, last)?true:false;
      return i;
    }
  return false;
}

int main()
{
  vi arr;
  fstream fin("Input.txt", ios::in);
  arr.insert(arr.begin(), istream_iterator<int>(fin), istream_iterator<int>());

  //std::sort(arr.begin(), arr.end());

  checkIfSorted(arr.begin(), arr.end())?cout<<"Yes":cout<<"No";

}
