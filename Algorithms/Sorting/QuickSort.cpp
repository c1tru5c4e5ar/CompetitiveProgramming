#include<bits/stdc++.h>
#define viter vector<int>::iterator

using namespace std;

viter partition(viter first, viter last)
{

  viter pivot = first;
  unsigned int count = 0;

  for(viter it = (first+1) ; it != last ; ++it){
    if(*it <=  *pivot)
      count++;
  }

  iter_swap(pivot, (first+count));
  advance(pivot, count);

  viter i = first;
  viter j = (last-1);

  while( i != pivot && j != pivot){
    if(*i <= *pivot)
      ++i;
    if(*j > *pivot)
      --j;

    if(*i > *pivot && *j <= *pivot)
    {
      iter_swap(i , j);
      ++i;
      --j;
    }
  }
  return pivot;
}

void quickSort(viter first, viter last)
{
  if(distance(first, last) <= 1)
    return ;

  viter pivot;
  pivot = partition(first, last);

  quickSort(first, pivot);
  quickSort(pivot+1, last);
}

int main()
{
  std::vector<int> v;

  fstream fin("Input.txt", ios::in);
  v.insert(v.end(), istream_iterator<int>(fin), istream_iterator<int>());

  quickSort(v.begin(), v.end());

  copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
  return 0;
}
