#include<iostream>
#include<list>
#include<algorithm>

using namespace std;

int main()
{

/* Properties:
* 1. fast inset/ remove at any place: O(1).
* 2. slow search: O(n).
* 3. no random access, no [] operator.
*/
  list<int> li = {2, 4, 6, 8};
  li.push_back(10);
  li.push_front(0);

  list<int>::iterator itr = find(li.begin(), li.end(), 4);
  li.insert(itr, 3);

  itr++;
  li.erase(itr);

  for(auto &i: li)
    cout<<i<<' ';


  //Biggest advantage of list is the splice function:
  ////mylist1.splice(itr, mylist2, itr_a, itr_b); //O(1)
  //Above will cut and paste the values from mylist2 between
  //itr_a and itr_b to mylist.1 at position of itr in CONSTANT TIME.


  //Forward List only has forward pointing pointers, hence it is only
  // possible to traverse the list from start to end, not backwards.

  return 0;
}
