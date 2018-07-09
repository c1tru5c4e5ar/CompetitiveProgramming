/*
* Deque
*/

#include<iostream>
#include<deque>

using namespace std;

int main()
{
  deque<int> dq = {1, 3, 5, 7, 9, 11};
  dq.pop_back();
  dq.pop_front();

  for(auto &i:dq)
    cout<<i<<' ';
  /*
  deque<int>::iterator it = dq.begin();
  ++it;
//  cout<<*it;
  dq.insert(it, 10);
//  cout<<*it;

  for(auto &i : dq)
    cout<<i<<' ';

    cout<<*it;

  //dq.resize(10);
//  cout<<dq.size();
*/
}
