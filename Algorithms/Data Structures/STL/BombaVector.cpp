#include<iostream>

using namespace std;

template<typename T>
class BombaVector
{
  T arr[1000];
  unsigned int asize = 0;

public:
  void pb(T a)
  {
    arr[asize] = a;
    asize++;
  }

  unsigned int size()
  {
    return asize;
  }

  T at(unsigned int a)
  {
    return arr[a];
  }
};


int main()
{
  BombaVector<int> bv;
  bv.pb(5);
  bv.pb(7);

  for(int i = 0; i<bv.size(); ++i)
    cout<<bv.at(i);


  return 0;
}
