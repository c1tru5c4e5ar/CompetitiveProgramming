#include<iostream>
#include<numeric>

//using namespace std;

template<typename T>
T gcd(T x, T y)
{
  while(x*y != 0){
    if(x>=y) x = x%y;
    else y = y%x;
  }
  return (x+y);
}

int main()
{
  int a,b;
  std::cin>>a>>b;
  //std::cout<<gcd(a,b);

  //Alternate
  std::cout<<std::gcd(a,b);

  return 0;
}
