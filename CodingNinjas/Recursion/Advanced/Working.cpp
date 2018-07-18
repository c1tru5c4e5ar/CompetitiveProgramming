#include<bits/stdc++.h>
#define vi std::vector<int>
#define viter std::vector<int>::iterator
#define pb push_back
using namespace std;

int main()
{
  std::vector<int> arr = {5,2,7,6,1,3,4};

  viter first = arr.begin();
  viter last = arr.end();

  viter mid = first;
  advance(mid, distance(first,last)/2);

  std::sort(first, mid);
  std::sort(mid, last);

//Merging
  vi v;
  v.reserve(distance(first, last));

  viter i,j;

  for(i = first, j = mid ; i != mid && j != last ; ){
    if(*i <= *j)
    {
      v.pb(*i);
      ++i;
    }
    else
    {
      v.pb(*j);
      ++j;
    }
  }

  while(i < mid){
    v.pb(*i);
    ++i;
  }

  while(j < last){
    v.pb(*j);
    ++j;
  }


  //cout<<arr.size()<<endl<<distance(first, last);

//*/
  std::copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));

  return 0;
}
