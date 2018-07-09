#include<iostream>
using namespace std;

template<typename T>
T square(T x)
  {return x*x;}

//declaration of BombaArray
template<typename T>
class BombaArray
{
  T array[1000];
  unsigned int size;

public:
  BombaArray(): size(0) {};
  void print() const
  {
    for(int i = 0; i<size; ++i)
      cout << array[i] << endl;
  }
  void push(T a)
  {
    array[size] = a;
    ++size;
  }
  unsigned int getsize()
  { return size; }

  T get(int i)
  { return array[i];}
};

int main()
{
  //cout<< square(6.5)<<endl;
  BombaArray<double> ba;
  ba.push(5.5);
  ba.push(7.8);
  ba.push(11.6);


  ba.print();
  cout<<ba.get(1);
  cout<<ba.getsize();

  return 0;
}
