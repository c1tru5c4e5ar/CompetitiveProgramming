#include<iostream>
#include<vector>
#include<iterator>

int fib(int n)
{
  if(n<=1)
    return n;
  return fib(n-1)+fib(n-2);

  //Exponential time, proportional to 2^n.
  //Height of recursive tree = n, with double function calls on each level,
  //as compared to previous level, hence 2*2*2*2...n function calls, ie. 2^n.
}

std::vector<int> v; // For larger values of num, declare v of type long long int
long long int fib2(unsigned int n)
{
    if(n<=1)
      return 1;

    else if(v.at(n))
      return v.at(n);

    v.at(n) = fib2(n-1)+fib2(n-2);
    return v.at(n);

    //Linear time, O(n)
    //As height of tree is still n, but it has only 2 funtion calls
    //on each level, ie. total 2n funtion calls.
    //Also, constant work is being done on each stage, hence time is
    //proportional to n.
}

long long int fib3(unsigned int n)
{
  if (n<=1)
    return 1;

  for(std::vector<int>::iterator it = v.begin()+2; it != v.end() ; ++it)
  {
    *it = *(it-1)+ *(it-2);
  }
  //for(int i = 2; i<n+1; ++i){
  //  v.at(i) = v.at(i-1)+ v.at(i-2);
  //}
  return v.at(n);
}

//*/

int main()
{
  unsigned int num;
  std::cin>>num;

  v.resize(num+1);
  v.at(0) = 1;
  v.at(1) = 1;

  std::cout<<fib3(num);


  return 0;
}
