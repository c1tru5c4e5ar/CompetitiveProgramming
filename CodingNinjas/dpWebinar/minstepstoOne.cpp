#include<iostream>
#include<algorithm>
#include<vector>
//using namespace std;
/*
int stepnumber = 0;

int minsteps(int n) //Recursive
{
  if(n==1)
    return 1;

    int divby3 = n;
    int divby2 = n;
    if((n%3)==0)
      divby3 /= 3;
    if((n%2)==0)
      divby2 /= 2;

  int lower = std::min(divby2, divby3);
  int lowest = std::min(--n, lower);

  stepnumber++;
  return minsteps(lowest);
}


int minsteps2(int n)//not DP
{
  int steps = 0;
  int num = 1;
  while(num<n)
  {
    if(num*3<=n)
      num*=3;
    else if(num*2<=n)
      num*=2;
    else
      num++;

    steps++;
  }

return steps;
}
*/

std::vector<int> steps;
/*
int minstepsto1(int n)
{
  if(n==1)
    return 0;

//If f(n) exists, return f(n).
  if(steps.at(n)!=-1)
    return steps.at(n);

  if(steps.at(n-1) != -1)
    steps.at(n) = 1 + steps.at(n-1);
  else{
    minstepsto1(n-1);
    steps.at(n) = 1 + steps.at(n-1);
  }

  if(n%2==0){
    if(steps.at(n/2) != -1)
      steps.at(n) = std::min(steps.at(n), steps.at(n/2)+1);
    }
    else{
      steps.at(n/2) = minstepsto1(n/2);
      steps.at(n) = std::min(steps.at(n), steps.at(n/2)+1);
    }

  if(n%3==0){
    if(steps.at(n/3) != -1)
      steps.at(n) = std::min(steps.at(n), steps.at(n/3)+1);
    }
    else{
      steps.at(n/3) = minstepsto1(n/3);
      steps.at(n) = std::min(steps.at(n), steps.at(n/3)+1);
    }
return steps.at(n);
}
*/
int minstepsto1(int n)
{

}




int main()
{
  int n;
  std::cin>>n;


  steps.resize(n+1);
  fill(steps.begin(), steps.end(), -1);
  steps.at(0) = 0;
  steps.at(1) = 0;
  //steps.at(2) = 1;
  //steps.at(3) = 1;
  //steps.at(4) = 2;

  minstepsto1(n);
  for(auto i: steps)
    std::cout<<i<<' ';
  //std::cout<<minstepsto1(n);
  //steps.at(4) = 2;
/*
  int ans;
  for(int i=5; i<n+1; ++i){
    steps.at(i) = 1 + steps.at(i-1);
    if(i%2==0)
      steps.at(i) = std::min(steps.at(i), 1+steps.at(i/2));
    if(i%3==0)
      steps.at(i) = std::min(steps.at(i), 1+steps.at(i/3));
    }
*/




  //std::cout<<minstepsto1(n);
  //std::cout<<stepnumber;

  return 0;
}
